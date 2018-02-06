/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //checking input n<0 return false
    if(n<0)
    {

        return false;
    }

    // searching algorithm

    int len=n;
    int start=0;
    int end=len;

    while(len>0)
    {
       //calculate mid

        int mid=(start+end)/2;
        //check value in mid
        if(value==values[mid])
        {
            return true;

        }
        //when return false start > end i.e value not in values
        else if(start > end)
        {
            return false;
        }
        else if(value > values[mid])
        {
               
                start=mid+1;

        }
        else
        {

                end=mid-1;

        }


    }

   return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    //  sorting algorithm
    int i,j,flag,temp;

        for (i=0; i<n ; i++ )
        {
            //assign flag

            flag=0;
            for(j=i; j<n-1; j++)
            {
                if(values[i] > values[j+1])
                {
                    //swapping the values
                    temp=values[j+1];
                    values[j+1]= values[i];
                    values[i]=temp;

                    flag=1;
                }
            }
            //when flag equal 0 sorting is done break out loop
            if(flag==0)
            {
                break;
            }

    }



}
