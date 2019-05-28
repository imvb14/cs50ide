#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n=10564;

    int sum=0;
    while(n!=0)
    {
        sum +=n%10;
        n=n/10;

    }
    printf("%d\n",sum);

}