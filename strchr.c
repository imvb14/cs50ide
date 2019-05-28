/***
 * strchr.c
 * Balaji
 * balaji.msd76@gmail.com
 * Implement strchr a starand function that return substring.

***/
#include<cs50.h>
#include<stdio.h>
#include<string.h>

char* my_strchar(char* str, char c);
int main(void)
{
    char *s=get_string("string:");

    char sub=get_char("char:");

     printf("Looking for a substring.......\n");

     char *result=my_strchar(s,sub);
     if(result == NULL)
     {
         printf("substring not found");

     }
     else
     {
         printf("substring: %s \n",result);
     }


}

char* my_strchar(char* str, char c)
{
    for(int i=0,n=strlen(str); i<n; i++)
    {
        if(str[i] == c)
        {
            return &str[i];
        }
    }
    return NULL;
}