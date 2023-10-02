#include<stdio.h>
int main()
{
	int arr[3][3], i, j;
	printf("Enter elements of array :\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &arr[i][j]); //scanf("%d", *(arr+i)+j);
		}
	}
	printf("Array given is :\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",arr[i][j]); //printf("%d", *(*(arr+1)+j));
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
