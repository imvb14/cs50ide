/***
 * three.c
 * 
 * Balaji.v
 * 
 * balaji.msd76@gmail.com
 * 
 * sum of numbers which is divisible by 3 or  divisible by 5
 * 
 * CONSTRAINTS
 * 
 * 0 >= N <= 10*5
 * 
 ***/



#include<stdio.h>
#include<cs50.h>  
int main(void)
{
       
       
  long n,sum=0;
  n=GetInt();
  
    
    for(int i=0; i<n;i++)
    {
        //check the condition if number divisible by 3 or number divisible by 5
        if(i%3==0||i%5==0)
        {
            //sum the numbers divisible by 3 or number divisible by 5
          
            sum=sum+i;
        }
        
    }
    
    //print the sum!!! :)
            
    printf("%ld\n",sum);
        

}