// printing maximum number from three 
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter the three numbers : \n");
	scanf("%d%d%d", &a,&b,&c);
	max=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("Maximum number is %d\n", max);
	return 0; 
}
