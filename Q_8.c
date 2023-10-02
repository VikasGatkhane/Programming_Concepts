#include<stdio.h>
int main()
{
	int bs, ts;
	float com,ns;
	printf("Enter basic salary and total sales amount :\n");
	scanf("%d%d", &bs , &ts);
	if(ts>=5000 && ts<= 7500)
	{
		com=0.03f*ts;
	}
	else if(ts>= 7501 && ts<=10500)
	{
		com = 0.08f*ts;
	}
	else if (ts>= 1501 && ts<= 15000)
	{
		com= 0.11f*ts;
	}
	else if(ts>15000)
	{
		com=0.15f*ts;
	}
	ns=bs+com;
	printf("Net salary = %f\n",ns);
	return 0
}
