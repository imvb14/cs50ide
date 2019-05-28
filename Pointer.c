#include<cs50.h>
#include<stdio.h>

int main()
{
    int* pa, *pb;
    printf("pointer fun!!\n");

    printf("give me a int please\n");
    int a= get_int();

    pa=&a;

    printf("give me a another int \n");
    int b= get_int();

    pb=&b;

    printf("the add of two pointer is%d\n",*pa+*pb);

