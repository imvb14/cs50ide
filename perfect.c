#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int n;
    int square;
    float square_f;

    n=get_int();


    square = floor(sqrt(n))+2;

    square *= square;

    printf("%d\n", square);

}