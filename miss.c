#include<stdio.h>
#include<cs50.h>

int main()
 {

	//code


        int N;

        N=get_int();

        int arr[N];
        int m;
        for(int i=0; i<N-1; i++)
        {
            scanf("%d",&arr[i]);
        }


        int size = sizeof(arr)/sizeof(int);

        for(int i=0; i<size; i++)
        {
            for(int j=i+1; j<=size; j++)
            {
                if(arr[i] == j)
                {
                    break;
                }
                else
                {
                    if(j == size)
                    {
                        break;
                    }

                    printf("%d",j);
                    break;
                }
            }

        }

        printf("\n");

	return 0;
}