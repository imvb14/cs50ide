#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = get_string("string please: ");
    int n=strlen(s), space = n;
    int mid = n/2;
    for(int i=0, j=n-1; i<n && j>=0; i++,j--)
    {
        //int mid = n/2;

       for(int k= 0; k< i; k++)
       {
           printf(" ");
       }
       printf("%c",s[i]);

       for(int l=space-2; l>0; l--)
       {
            printf(" ");

       }
       space = space -2;
        if(mid == j)
        {
          s[j] = ' ';
          for(int x=i,y=j+1; x<n && y>n; x++,y++)
          {
              //for
          }
        }
        printf("%c",s[j]);
        printf("\n");

    }
  printf("\n");

}