#include <cs50.h>
#include <stdio.h>

int main(void)
{

   int n=10;

   bool prime[n+1];

   for(int i=0; i<n+1; i++)
   {
       prime[i]= true;

   }

   for(int p=2; p*p<n; p++)
   {
       if(prime[p] == true)
       {
           for(int i=p*2; i<=n; i =i+p)
           {
               prime[i]=false;
           }
       }
   }

   for(int i=2; i<=n; i++)
   {
       if(prime[i]==true)
       {
           printf("%d\n",i);
       }
   }

}