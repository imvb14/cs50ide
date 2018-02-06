
#include<cs50.h>
#include<stdio.h>

int main(void)
{

      int i,j,k,l,m,n;

      printf(" enter the height: ");
      l=get_int();



       for(i=0;i<l; i++)
       {
           for(m=1; m<l-i; m++)
           {

               printf(" ");

           }
           for(n=0; n<i+1; n++)
           {

               printf("#");
           }

                for(k=0;k<2; k++)
                 {

                   printf(" ");

                  }

              for(j=0; j<i+1; j++)
              {

                  printf("#");

              }
              printf("\n");

           }



}
