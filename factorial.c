#include<stdio.h>
#include<cs50.h>

int main()
{
    
    int n,sum=1;
    n=GetInt();
    for(int i=n; i>0; i--)
    {
        
        sum=sum*i;
    }
    printf("processing.......\n");
    printf("%d! is %d\n",n,sum);
}