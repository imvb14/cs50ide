/*
*  mark.c
*  balaji.v
*  balaji.msd76@gmail.com
*  calculate the student marks
*   

**/
#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
        
    string name;
    int m1,m2,m3,tot,avg,n;
   do
   {
         printf("enter the no of stud:");  //check the condition for n<0
         n=GetInt();
       
   }while(n<0);
  
    for(int i=0; i<n; i++)
    {
        printf("enter student name: ");
        name= GetString();
        printf("enter the marks m1:m2:m3:\n");  //geting the input for 3 various marks
         m1=GetInt();
         m2=GetInt();
         m3=GetInt();
         
         if(m1&&m2&&m3<=100)    //check the condition marks not greate than 100
         {
             tot=m1+m2+m3;
             avg=tot/3;             //calculating the average and total
             printf("%s total is %d\n",name,tot);
             printf("%s averege is %d\n",name, avg);
         }
         
         else
         {
             
             printf("oops!\n check your marks once again please....\n");
         }
    }
}