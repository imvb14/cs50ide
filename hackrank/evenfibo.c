/***
 * evenfibo.c
 * 
 * Balaji.v
 * 
 * balaji.msd76@gmail.com
 * 
 * generate the fibonacci numbers and add the even fibonacci numbers up to n eg(n=10)
 * 
 * Constraints
 * 
 * 1 <= N >= 10*5
 
 **/





#include<cs50.h>
#include<stdio.h>

int main(void)
{
    
   long long n,a=1,b=0,c,sum=0;
  
     n=GetInt();
     
     for(int i=0; i<n; i++)
     {
       
        //generate fibo Nubmer
         c=a+b;
         
         b=a;
         a=c;
         //check the condition for c leser than n and c is even and c is greater than zero
         if(c<n && c%2==0 && c>0)
         {
              //add  the even fibonacci numbers 
               sum=sum+c;
             
             
              
         }
       
         
     }
     
      //and print the sum of even fibonacci numbers!!! :) 
     printf("%lld\n",sum);
     
    
}