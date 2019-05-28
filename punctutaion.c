#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s;
    
    s=GetString();
    for(int i=0,n=strlen(s); i<n; i++)
    {
        if(s[i] == ',')
        {
          printf(" ");
        }
           printf("%c",s[i+1]);
        
    }
    printf("\n");
}