#include <cs50.h>
#include <stdio.h>

int positive (void);

int main(void)
{
    
   
    int n=positive();
    printf("thanks!!%i",n);
    
}

int positive (void)
{
    
   int n;
     
    do
    {
        
         printf("enter the no: ");
         n=GetInt();
    }while(n<1);
    return n;
}