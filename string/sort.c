#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    char* s;

    printf("enter the string: ");
    s=get_string();

     int i,j,flag,temp,n;
    for( i=0,n=strlen(s); i<n; i++)
    {
        flag=0;
        for(j=i;j<n-1; j++)
        {
            if(s[i] > s[j+1])
            {
                    temp=s[j+1];
                    s[j+1]= s[i];
                    s[i]=temp;
                    flag=1;
            }

        }
        if(flag == 0)
        {
            break;
        }
    }

    for(i=0,n=strlen(s)+1; i<n; i++)
    {
        printf("%c",s[i]);
    }
  printf("\n");
}