/***
 * 
 * Balaji.v
 * balaji.msd76@gmail.com
 * calculate percentage for a given numbers
 * 
 ***/ 


#include<cs50.h>
#include<stdio.h>

int main(void)
{
    float i,j;//assign  in float
 
     //check the number wether number +ve are not
     do
     {
         printf("enter the +ve numerator\n");
         i=GetInt();
         
     }while(i<0);
     
     //check the number wether number +ve are not
     do
     {
         printf("enter the +ve denominator\n");
         j=GetInt();
     }while(j<0);
     
     
     //calculate the percentage
    float k=i/j*100;
    printf("%.2f %%\n",k);//and put %% for print %int
    
    
}