#include<stdio.h>
void areaCirc(int radius, float *parea , float *pperi)
{
	*parea= 3.142*radius*radius;
	*pperi=2*3.142*radius;
}
void areaperi(int l, int b, float *parea , float *pperi)
{
	*parea= l*b;
	*pperi= 2*(l+b);
}
int main()
{
	int choice, radius, l, b;
	float area , peri;
	printf("Enter : \n 1.Circle \n 2.Rectangle \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the radius: \n");
			scanf("%d",radius);
			areaCirc(radius, &area, &peri);
			printf("Area of circle is %f and perimeter of circle is %f\n", area, peri);
			break;
		case 2:
			printf("Enter the lenth and breadth of rectangle : \n");
			scanf("%d%d",&l,&b);
	}
}
