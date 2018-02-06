#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void)
{
    string s;
    printf("enter the string:");
       s=GetString();
       if(s!=NULL)
       {
            for(int i=0,n=strlen(s); i<n; i++)
            {
                
                printf("%c",s[n-i-1]);
                
            }
            printf("\n");
         
       }
        
       
    
}
