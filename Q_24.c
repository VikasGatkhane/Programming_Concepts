#include<stdio.h>
void maxmin(int arr[], int n)
{
	int max, min;
	max= arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("maximum element of array is %d\n", max);
	min=arr[0];
	for(int j=1; j<n; j++)
	{
		if(arr[j]<min)
		{
			min= arr[j];
		}
	}
	printf("Minimum element of the array is %d\n",min);
}
void multiplybyfive(int *arr, int n )
{
	int temp[100], i;
	for(i=0; i<n; i++)
	{ 
		temp[i]=5*arr[i]; 
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", temp[i]);
	}
}
int main()
{
	int arr[100], n,i;
	printf("How many elements :\n");
	scanf("%d", &n);
	printf("Enter integers :\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	maxmin(arr,n);
	multiplybyfive(arr,n);
	printf("\n");
	return 0;
}
