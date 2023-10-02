#include<stdio.h>
int main()
{
	int bs;
	float hra, da, pf,gs,ns;
	printf("Enter basic salary : \n");
	scanf("%d", &bs);
	hra = 0.15f*bs;
	da= 0.3f*bs;
	gs = bs +hra+da;
	pf=0.125f*gs;
	ns= gs-pf;
	printf("Gross salary = %f\n Net Salary = %f\n", gs,ns);
	return 0;	
}
