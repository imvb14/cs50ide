#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    //memory allocation for string
    char string[50];
    int m;
    printf("enter the string: ");

    scanf("%s",string);

    for(int i=0,n=strlen(string); i<n; i++)
    {
        m=atoi(&string[i+1]);

        for(int j=0; j<m; j++)
        {
            printf("%c",string[i]);
        }
    }
    printf("\n");


}