#include<stdio.h>
#include<string.h>
// .(Dot -> use with value )      -> (Arrow used with addres )
struct laptop{
	int srno;
	char make[20];
	double cost;
};
int main()
{
	struct laptop l1 = {101, "lenovo", 45000}, l2;
	struct laptop l3, *lptr;
	
	printf("%d %s %lf \n", l1.srno, l1.make , l1.cost);
	
	printf("Enter laptop details (id , make , cost) : \n");
	scanf("%d%s%lf", &l2.srno, &l2.make, &l2.cost);
	printf("%d %s %lf\n", l2.srno, l2.make , l2.cost);
	
	lptr= &l3;
	printf("Enter laptop details (id , make cost ) : \n");
	scanf("%d%s%lf", &lptr->srno , &lptr->make, &lptr->cost);
	printf("%d %s %lf\n	", lptr->srno, lptr->make, lptr->cost);
	return 0;
}
