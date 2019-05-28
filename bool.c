/***
 * balaji.v
 * balaji.msd76@gmai.com
 * play with boolean!!!
 * 
***/


#include<cs50.h>
#include<string.h>
#include<stdio.h>

int main(void)
{
    int n=GetInt();
    bool even = true;
    printf("the even no's are:\n");
    for(int i=0; i<=n; i++)
    {
        
           //checking the condtion
            if(even==true)
              
               printf("%d\n",i);
   
            
        
        //flips even 1 to 0 or TRUE to FALSE    
          even=!even;
        
    }
    printf("\n");
    
}