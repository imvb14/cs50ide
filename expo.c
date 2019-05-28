#include<stdio.h>
#include<cs50.h>
#define mod 1000000007

long long expo(long a, long b)
{
   if(a == 0)
   {
       return 0;
   }

   if(b == 0)
   {
       return 1;
   }

   long long temp=0;

   if(b%2 == 0)
   {
       temp = expo(a,b/2);
       temp = (temp * temp) %mod;
   }
   else
   {
       temp = a % mod;
       temp =(temp * expo(a, b - 1) % mod) % mod;
   }

   return ((temp + mod)%mod);
}
int main(void)
{

    long long ans = expo(2,2);
    printf("%lld\n", ans%mod);
}