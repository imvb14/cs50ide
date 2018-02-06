/**
 * plai.c
 * balaji.v
 * balaji.msd76@gmail.com
 * create function called Palindrome


**/
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

void Palindrome(string s);  //protype

int main(void)
{
    printf("enter the string:\n");
    string str= GetString();      //getting a user input
    Palindrome(str);            //function calling
    
}

void Palindrome(string s)   //function
{
    
    
   if(s!=NULL)
       {
            for(int i=0,n=strlen(s); i<n; i++)
            {
                
                printf("%c",toupper(s[n-i-1]));   //convert string to palindrome 
                
            }
            printf("\n");
         
       }
    
    
}

//(c) Powered by HW!