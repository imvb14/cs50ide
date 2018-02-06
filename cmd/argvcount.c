#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc , string argv[])
{
    
    int n,count=0;
    for(int i=1; i<argc; i++)
    {
        
        n=strlen(argv[i]);
        count+=n;
        
    }
    printf("%d\n" ,count);
    
}