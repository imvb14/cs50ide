#include<cs50.h>
#include<stdio.h>


int main(void)
{
   int a[4][4] = {{0,0,0,1},{0,1,1,0},{1,1,1,0},{1,1,1,1}};
   int count[4] = { 0 };
   int first_count,second_count=0,j,i,temp;
   for(i=0; i<4; i++)
   {
       first_count=0;
     for(j=0; j<4; j++)
     {
       if(a[j][i] == 0 )
       {
           first_count++;

       }


     }
     count[i]=first_count;

   }
   int max=count[0];
    for(i=0; i<4-1; i++)
    {

        if(max < count[i])
        {

            max=count[i];

        }
    }

    for(i=0; i<4; i++)
    {
        if(max == count[i])
        {
            printf("%d\n",i);
        }
    }


    for(i=0; i<4; i++)
    {
        printf("%d", count[i]);
    }

   printf("\n");
      for( i=0; i<4; i++)
   {
     for( j=0; j<4; j++)
     {
        printf("%d ",a[i][j]);
     }
    printf("\n");
   }


}