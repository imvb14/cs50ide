
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    
    printf("sate ur string please: ");
    string s= GetString();
    
    for(int i=0,n=strlen(s); i<=n; i=i+2)
    {
        
        printf("%c",toupper(s[i]));
        
    }
    
    printf("\n");
}