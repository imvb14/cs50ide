#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    
    string s=GetString();
    
    int count=0;
    
    for(int i=0,n=strlen(s); i<n; i++)
    {
        
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            
            
            count++;
        }
        
    }
    printf("%d\n",count);
}