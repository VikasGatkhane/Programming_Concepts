#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	double avg;
	printf("Enter the marks of five subjects : \n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	avg = ((float)a+b+c+d+e)/5;
	printf("The average marks of subject is : %lf \n", avg);
	return 0;
}
