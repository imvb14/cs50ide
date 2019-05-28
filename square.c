#include<cs50.h>
#include<stdio.h>

int main(void)
{
    
    int n;
    
    do 
    {
        
        printf("Give me a number between 1 and 23: ");
        n=GetInt();
        
    }while(n<0||n>=23);
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            
            printf("#");
        }
        printf("\n");
    }
    
}