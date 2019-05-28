/**
* count.c
* balaji.v
* balaji.msd76@gmail.com
* display the -ve and +ve number in given input using array


**/
#include<stdio.h>
#include<cs50.h>

int n,i;  //gobal decleration for i=used to increment ++ in for loop , n=getting number's from user

int main(void)
{
    
    do
    {
        printf("enter how many numbers:\n");
        
         n=GetInt();
     }while(n<0);
    
    int num[n];  //initials tha array[]
    printf("enter the numbers:\n");
    for( i=0; i<n; i++)
    {
        
        num[i]=GetInt();  //getting the input from the user using for loop because we collecting 'n' number of inputs
    }
    
    
    
        for(i=0; i<n; i++)
        {
                                                                //check the condition and then print
           
            if(num[i]<0)
            
            {                                               
                 //printf("the -ve number are:\n");
                printf("%d\n",num[i]);
            }
            else
            {
                //printf("the +ve numbers are :\n");
                printf("%d\n",num[i]);
            }
        }
           
    
        
    
    
   
}                          //(c) powerded by HW!