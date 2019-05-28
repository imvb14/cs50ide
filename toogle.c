#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
        int a=1;
        int b=1;

        for(int i=2; i<=10; i++)
        {
            printf("%d ",a+b);

            b=a+b;
            a=b-a;
        }
}