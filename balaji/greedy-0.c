#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
     float cents;//,quater=0.25,dime=10,nickey=5,penny=1;
      //int count=0;
       do
       {
           printf("hai how many change is owed!\n");
           cents=GetFloat();
           
       }while(cents<0);
       
       cents=cents*100;
       cents=round(cents);
       

         cents=cents/25.0;
         cents=cents % 25.0;
         printf("%f\n",cents);
       
      
     
    
    
}