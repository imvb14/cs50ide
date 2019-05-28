#include<stdio.h>

int main(void)
{
    int arr[]={1,4,1,5};

    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++)
    {
        for(int j=i; j<size-1; j++)
        {
            if(arr[i] == arr[j+1])
             {
                 arr[j+1]--;
            }
        }

    }

 for(int i=0; i<size; i++)
 {
     printf("%d",arr[i]);
 }

 printf("\n");
}