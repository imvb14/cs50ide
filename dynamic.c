#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n=get_int();

    int *array=malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        array[i]=i;
    }

    for(int i=0; i<n; i++)
    {
        printf("%d\n", *(array+i));
    }

    free(array);
}