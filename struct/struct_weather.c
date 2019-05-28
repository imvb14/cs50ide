#include<stdio.h>
#include "weather.h"

int main(void)
{
    weather read[7];

    weather temp;

    printf("enter the weather details of the week\n");
    for(int i=0; i<7; i++)
    {
        printf("enter the day: ");
        scanf("%s", read[i].days);

        printf("enter the degree: ");
        scanf("%f", &read[i].degree);
    }

    //sorting;
    for(int i=0; i<7; i++)
    {
        for(int j=i; j<7-1; j++)
        {
            if(read[i].degree > read[j+1].degree)
            {
                temp=read[i];
                read[i]=read[j+1];
                read[j+1]=temp;

            }
        }

    }

     printf("\n\n");
    for(int i=0; i<7; i++)
    {

        printf("%s, %1.f\n",read[i].days,read[i].degree);
    }
}