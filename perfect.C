#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int n;
    int square;
    float square_f;

    n=get_int();



    for(int i=0; i<n; i++)
    {
        printf("%d\n",sqrt(i));
    }
}