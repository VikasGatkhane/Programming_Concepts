#include<stdio.h>
void RemoveElement(int *arr, int *n)
{
	int pos,i;
	printf("Enter position of element to be removed:  \n");
	scanf("%d", &pos);
	for(i=pos; i<*n; i++)
		arr[i]=arr[i+1];
	(*n)--;
}
void InsertElement(int *arr, int *n)
{
	int val, pos,i;
	printf("Enter value to be inserted inside an array :\n");
	scanf("%d", &val);
	printf("Enter the position of element : \n");
	scanf("%d", &pos);
	for(i=*n; i>pos; i--)
		arr[i]=arr[i-1];
	arr[pos]=val;
	(*n)++;
}
void PrintArray(int *arr, int n)
{
	int i; 
	for(i=0; i<n; i++)
		printf("%d\n", arr[i]);
	printf("\n");
}
int main()
{
	int arr[100], n,i;
	printf("How many elements?\n");
	scanf("%d",&n);
	printf("Enter array elements \n");
	for(i=0; i<n;i++)
		scanf("%d",&arr[i]);
	RemoveElement(arr, &n);
	printf("Array after removing element: \n");
	PrintArray(arr, n);
	InsertElement(arr,&n);
	printf("Array after inserting Element: \n");
	PrintArray(arr, n);
	return 0;
}
