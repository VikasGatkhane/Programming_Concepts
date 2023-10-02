#include<stdio.h>
void getDate(int *day , int *month, int *year)
{
	scanf("%d%d%d", day, month, year);
}
int main()
{
	int day, month, year;
	getDate(&day, &month , &year);
	printf("%d/%d/%d\n", day, month, year);
	return 0;
}
