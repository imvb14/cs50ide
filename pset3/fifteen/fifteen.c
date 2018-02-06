/**
 * fifteen.c
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

// declare i,j

int i,j;




// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // close log
    fclose(file);

    // success
    return 0;
}

/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */

void init(void)
{

    // declare the variables

      int count = d*d-1 ;
      int temp;

   //insert values in 2D array
    for(i=0; i<d; i++)
    {
        for(j=0; j<d; j++)
        {

                board[i][j]= count;
                count--;


        }


    }

    // check  d is even

  if(d%2==0)
  {


    for(i=0; i<d; i++)
    {
        for(j=0; j<d; j++)
        {
            if(board[i][j]==1 )
            {
                //swapping 1 to 2 and 2 to 1

                 temp=board[i][j];
                 board[i][j]=board[i][j-1];
                 board[i][j-1]=temp;

            }
        }
    }
  }

}

/**
 * Prints the board in its current state.
 */
void draw(void)
{
    //iterate over the board

     for(i=0; i<d; i++)
        {
            for(j=0; j<d; j++)
            {
                //find the value 0 insted of that print _
                if(board[i][j]==0)
                {

                        printf("%3c",board[i][j]+'_');
                }
                else
                {

                  printf("%3d", board[i][j]);
                }


            }
        printf("\n");
    }


}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false.
 */
bool move(int tile)
{
    //decalre the variables to find blank and much more

     int temp,blank=0,swap=0;

        for(i=0; i<d; i++)
        {
            for(j=0; j<d; j++)
            {

               if(swap == 0)
               {
                   // check the number in board

                   if(board[i][j]==tile )
                   {
                      // Condition check j or coloum is  < than d-1
                      // it move the  tile left to right

                        if(j < d-1 && board[i][j+1] == blank)
                        {


                            temp=board[i][j];
                            board[i][j]=blank;
                            board[i][j+1]=temp;

                             swap=1;
                             return true;


                        }

                         // it's move the tile right to left

                        else if(i < d-1 && board[i+1][j] == blank)
                        {
                            temp=board[i][j];
                            board[i][j]=blank;
                            board[i+1][j]=temp;
                            swap=1;
                            return true;

                        }

                        //check the condtion check i > 0

                        //it's move the tile upward
                        else if(i > 0 && board[i-1][j] == blank)
                        {
                            temp=board[i][j];
                            board[i][j]=blank;
                            board[i-1][j]=temp;
                            swap=1;
                            return true;
                        }
                         //it's move the tile downward
                        else if(j > 0 && board[i][j-1] == blank )
                        {
                            temp=board[i][j];
                            board[i][j]=blank;
                            board[i][j-1]=temp;
                            swap=1;
                            return true;

                        }

                  }

               }

            }


        }
return false;

}

/**
 * Returns true if game is won (i.e., board is in winning configuration),
 * else false.
 */
bool won(void)
{
    // TODO
    int n=1;
    //iterate over the board

    for(int i=0; i<d; i++)
    {
        for(int j=0; j<d; j++)
        {
            //check the condition n equals d*d won return true
              if(n==d*d)
              {

                  return true;
                  break;
              }
            if(board[i][j]==n)
            {
               n++;
            }

        }
    }

 return false;
}
