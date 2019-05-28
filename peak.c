#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main()
{
   int arr[] = {10,20,15,12,23,90,16};

   int size = sizeof(arr)/sizeof(int);

   for(int i=0; i<size; i++)
   {
       if(arr[i] > arr[i+1])
       {
           printf("%d\n",i);
           i++;
       }
   }
}