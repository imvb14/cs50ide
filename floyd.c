#include<stdio.h>

int main(void)
{
    int k;
    
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<i; j++)
        {
             
            
             k=i+j;
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    
}