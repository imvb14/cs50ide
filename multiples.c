#include<cs50.h>
#include<stdio.h>

int main(void)
{
 int n;
 
      do
      {
        printf("Give me a number between 1 and 100: ");
        n=GetInt();
          
          
      }while(n<0 || n>100);
      
      
      for(int i=1; i<=20; i++)
      {
          
          printf("%d ",i*n);
      }
     
      printf("\n");
}