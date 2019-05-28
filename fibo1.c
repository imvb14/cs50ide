#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int fn,f0=0,f1=1;
    int sum=0;
    int n=get_int("give a int \n");
    for(int i=1; i<n ; i++)
    {

        if(fn > n)
          break;


            fn= f0+f1;
            if(fn % 2 ==0)
            {
                sum =sum+fn;
            }

            f0=f1;
            f1=fn;

    }
    printf("%d\n",sum);
}