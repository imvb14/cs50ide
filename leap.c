

#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int year;
    printf("enter the year:");
     year=GetInt();
     
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        
        printf("it's a leap year!!!\n");
        
    }
    
    
    
}