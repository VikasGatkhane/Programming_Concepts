#include<stdio.h>
int* Max(int *px , int *py)
{
	if(*px>*py)
		return px;
	else if(*py>*px)
		return py;
	else
		return NULL;
}
int main()
{
	int a,b;
	printf("Enter two numbers : \n");
	scanf("%d", &b);
	
}
