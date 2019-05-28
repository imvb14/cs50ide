#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int *pi=NULL;
    int x =5;

  // this is reference
     pi = &x;

     printf("pi is %d\n", *pi);
     printf("x is %d\n",x);

  //this is de-reference

     *pi = 7;
    printf("pi is %d\n", *pi);
    printf("x is %d\n",x);

}