
#include<ctype.h>
#include<cs50.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, string argv[])
{
      
      if(argc!=2)
      {
          printf(" / " );
          return 1;
          
      }
       int key=atoi(argv[1]);
    
    
    
    string s=GetString();
    int result;

    
    
        for(int i=0,n=strlen(s); i<n; i++ )
         {
             
             if(isalpha (s[i])&&isupper(s[i]))
             {
                 result=(s[i]+key+'A')%26;
                 result=result+'A';
                 printf("%c",result);
             }
             else if(isalpha (s[i])&&islower(s[i]))
             {
                 result=(s[i]+key-'a')%26;
                 result=result+'a';
                 printf("%c",result);
             }
             else
             {
                 printf("%c",s[i]);
             }
             
         }
        
    
    printf("\n");
    return 0;
}
