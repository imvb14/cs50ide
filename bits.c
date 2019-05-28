#include<stdio.h>
#include<cs50.h>

void Binary(int n);

int main(void)
{
    
    printf("enter the number: ");
   
    Binary();
    
}

void Binary(int n)
{
    int m;
    do
    {
        printf("height\n");
        
        m=GetInt();
        
    }
    while(m<0||m>23);
    
    
}