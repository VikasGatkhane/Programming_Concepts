#include<stdio.h>
int main()
{
	int year; 
	printf("Enter year :\n");
	scanf("%d", &year);
	(year%4==0 && year%100!=0 || year%400==0)?printf("Leap\n"):printf("not a leap year\n");
	return 0;
}
