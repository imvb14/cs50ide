#include<stdio.h>
#include<cs50.h>

int search1(int arr[], int start, int end, int x)
{
    int mid = start + (end - start)/2;

    if(end < start)
    {
        return -1;

    }

    if(arr[mid] == 1 && arr[mid+1] != 0)
    {

        return mid;

    }

    if(arr[mid+1] == 1)
    {
        search1(arr, mid+1, end, x);
    }

    if(arr[mid] == 0)
    {
        search1(arr,start, mid-1, x);
    }
    return mid;
}

int main(void)
 {
	//test case
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    long N;
	    scanf("%ld", &N);

	    int arr[N];

	    for(int i=0; i<N; i++)
	    {
	        scanf("%d", &arr[i]);
	    }

	  // vector <int> v(arr, arr+N);

	   int count = search1(arr, 0, N, 1);
	   printf("%d\n",count);

	}
	return 0;
 }