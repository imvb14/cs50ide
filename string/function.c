#include<ctype.h>
#include<stdio.h>
#include<string.h>

void modify(char *string);

int main(void)
{
    char s[64];

    printf("enter the string: ");
    fgets(s,64, stdin);
    modify(s);
  printf("%s",string);

}

void modify(char *string)
{

    for(int i=0,n=strlen(string); i<n; i++)
    {

        if(*string ==' ')
        {
            *string='_';

        }
    *string=toupper(*string);
    string++;

    }



}
