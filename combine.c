#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    
    printf("ente the string: ");
    
    string s=GetString();
    
    for(int i=0,n=strlen(s); i<n; i++)
    {
        
        if(s[i]==' ')
        {
            
            printf("%c",s[i]-1);
        }
        else
        {
            
            printf("%c",s[i]);
        }
    }
    printf("\n");
}