#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p, n, avg,add;
	printf("Enter the number of subject :\n ");
	scanf("%d", &n);
	p= (int*)malloc(sizeof(int)*n);
	printf("Enter the marks of subjects : \n");
	for(int i=0; i<n ; i++)
	{
		scanf("%d", &p[i]);
	}
	for(int i=0; i<n; i++)
	{
		add=add+p[i];
	}
	avg=add/n;
	printf("Average marks of subjects is : %d\n",avg);
	free(p);
	return 0;
}
