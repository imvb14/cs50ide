#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
     int k;
    do
    {
        printf("height\n");
        n=GetInt();
    }
    while(n<0||n>23);
    for(int i=1; i<=n; i++)
    {
       
     
        for (k=1; k<=n-i; k++)
        {
            
            printf(" ");
           
        }
         k--;
         for(int j=1 /i%i; j<=i; j++)
         {
             printf("#");
         }
        
         printf("\n");
        
    }
   
}