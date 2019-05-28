#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    printf("Temperature in F: ");
    int f=GetInt();
    
    float c=(f-32)/1.8;
    printf("Temperature in C: %.2f\n",c);
    
    
}