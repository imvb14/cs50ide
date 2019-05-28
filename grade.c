#include<cs50.h>
#include<stdio.h>

int main(void)
{
    
    int n;
    printf("Enter a valid grade: ");
    n=GetInt();
    
    if(n>=90)
    {
        
        printf("u got an A!!\n");
    }
    else if(n>=80 && n<=89)
    {
      printf("u got an B!!\n");  
    }
     else if(n>=70 && n<=79)
    {
      printf("u got an C!!\n");  
    }
     else 
    {
      printf("u got an D!!\n");  
    }
}