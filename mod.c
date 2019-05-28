#include<stdio.h>
#include<math.h>

int main(void)
{
    int c[]={1,2,3};

   // int size=sizeof(a)/sizeof(int);

    int power_set=pow(2,3);
    for(int i=0; i<power_set; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i &(1<<j))
            {
                printf("%d",c[j]);
            }

        }
         printf("\n");
    }


}