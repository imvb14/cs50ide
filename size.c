#include<stdio.h>

int size(int a[]);

int main(void)
{
   int n[5]={1,2,3,4,5};
 printf("the size of array%d\n",size(n));
}

int size(int a[])
{

    int len=sizeof(a)/sizeof(a[0])-1;
    return len;
}