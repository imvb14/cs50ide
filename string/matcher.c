/***
 * anagrams.c
 * balaji
 * vb14@pm.me
 *
***/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

void anagram(string x,string y);

int main(void)
{
   string s="xyxyxy";
   int n=strlen(s);

   int flag,j,k=0,count1,count2,i=0;

    for(i=0; i<n; i++)
    {
        count1=0;
        count2=0;
        flag=0;
        for(;k<n; k++)
        {
            if(s[k] == 'x')
            {
                 count1++;

            }
            else
            {
                break;
            }
        }


        printf("%d ",count1);
       for(j=k; j<n; j++)
       {
           if(s[j] == 'y')
           {
               count2++;

           }
           else
           {
               break;
           }

       }
       //printf
       if(count1 == count2 )
       {

           flag =1;
       }
       else{
           flag =0;
           break;
       }
     k=j;
     //printf("%d ",i);
    }
printf("\n\n\n");

    if(flag == 1)
    {
        printf("%d\n",0);
    }
    else{
        printf("%d\n",1);
    }
}



