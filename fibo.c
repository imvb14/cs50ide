#include<cs50.h>
#include<stdio.h>

unsigned long long fibogenerator(long n);

int main(void)
{
    int range;
    range =get_int();

    printf("%llu", fibogenerator(range));

}
unsigned long long fibogenerator(long n)
{

   unsigned long long f1=0,f2=1,fn;
    unsigned long long sum=0;
    for(int i=1; i<n; i++)
    {
        fn =f1+f2;

        f1 = f2;
        f2 = fn;

       if(fn % 2 == 0)
       {
           sum = sum+fn;

       }
    }
    return sum
}