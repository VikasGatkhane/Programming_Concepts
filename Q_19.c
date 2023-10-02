#include<stdio.h>
void Fibonacci(int terms)
{
	int a=0, b=1;
	int c;
	while (terms >2)
	{
		c=a+b;
		printf("%d, ",c);
		a=b;
		b=c;
		terms --;
	}
	printf("\n");
}
int main()
{
	int terms;
	printf("Enter the number of terms for fibonacci series :\n");
	scanf("%d", &terms);
	printf("0, 1, ");
	Fibonacci(terms);
	return 0;
}
