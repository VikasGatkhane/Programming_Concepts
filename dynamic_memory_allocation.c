#include<stdio.h>
#include<stdlib.h>
// malloc, calloc, realloc, free
int main()
{
	int *p, n, i;
	printf("How many integers: \n");
	scanf("%d", &n);
	
	printf("Enter the integer :\n");
	
	p=(int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &p[i]);
	}
	print("You Entered array : \n");
	for(i=0; i<n; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
	p=NULL;
	printf("\n");
	return 0;
}
