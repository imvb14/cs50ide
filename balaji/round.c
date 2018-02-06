#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float n;
    
    n=GetFloat();
    n=n*100;
    n=round(n);
    n=n%25.0;
    printf("%f\n",n);
    
}