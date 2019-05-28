#include<cs50.h>
#include<stdio.h>

int main(void)
{
    
    int n;
    
    printf("Average number of children per family in US:");
    n=GetInt();
    
    if(n==2)
        printf("That is correct!\n");
    else
       printf("That is incorrect!\n");
    
}