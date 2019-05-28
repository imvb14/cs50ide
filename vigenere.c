#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<cs50.h>
int main(int argc , string argv[])
{

     int result;

   string letter =get_string();

    for(int x=0; x < argc; x++)
    {

        for(int y=0, z=strlen(argv[1]); y<z; y++)
        {
            for(int i=0,j=0,n=strlen(letter); i<n; i++)
    	     {


                  if(isupper(argv[x][y]) && isalpha(letter[i]) && isupper(letter[i]))
                  {
                   result= (argv[x][y] + letter[i])%26;
    		       result=result + 'A';
    		       printf("%c",result );
                    j++;
                  }

    	          else if(islower(argv[x][y]) && isalpha(letter[i]) &&islower(letter[i]))
    	          {


                   result= (argv[x][y]+ letter[i] +'a'+'A'-'z')%26;
    		       result=result + 'a';
    		       printf("%c",result );
    		       j++;

    	          }

    	          else
    	          {
    	          	printf("%c",letter[i]);
    	          }
    	     }
        }
    }

         printf("\n");

}