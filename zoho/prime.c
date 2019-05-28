#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n[10],counter=0;

   int arrlen = sizeof(n)/sizeof(int);
   int k,l;
    for(int i=1; i<=10; i++)
    {
        n[counter]=i;
        counter++;
    }

    int flag=0;
    for(int j=0; j<10; j++)
    {
        if(n[j] !=1)
        {
             for(k=1; k<=n[j]; k++)
             {
                 if(n[j]%k == 0)
                 {
                     flag++;
                 }
             }

             if(flag == 2)
             {
                 for(l=n[j+1]; l<10; l++)
                 {

                     if(n[k] % n[j]==0)
                     {
                        arrlen -= 1;
                       for(int m=0; m<arrlen; m++)
                         n[l]=n[j+1];

                     }

                 }

             }


        }

    }

}