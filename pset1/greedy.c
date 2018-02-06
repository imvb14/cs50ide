#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float n,quater=25,cents,dime=10,nickey=5,penny=1;
    int count=0;
    do
    {
        
        printf("hai! how many changes you owed?\n");
        n=GetFloat();
        
    }
    while(n<0);  
    n=n*100;    
     cents=(int) round(n);
    while(cents-quater>=0)
    {
        
        count=count+1; 
        cents=cents-quater;
        
    }
    
    while(cents-dime>=0)
  
  {
      
      count=count+1;
      cents=cents-dime;
  }
  
    while(cents-nickey>=0)
    
    {
        count=count+1;
        cents=cents-nickey;
        
        
    }
    while(cents-penny>=0)
    {
        
        count=count+1;
        cents=cents-penny;
    }
    
    
    printf("%i\n",count);
    
}