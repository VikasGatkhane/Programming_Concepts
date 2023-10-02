#include<stdio.h>
typedef struct Book{
	int bookid; 
	const char title[20];
	double price;
	
}BK;

void Display(BK b1[5]){
	for(int i=0; i<5; i++)
	{
		printf("%d %s %lf \n", b1[i].bookid, b1[i].title, b1[i].price);
	}
}
int main()
{        
        BK b[20];
	for(int i=0; i<5; i++)
	{
		printf("Enter the data of book(bookid , title , price ) :\n");
		scanf("%d%s%lf", &b[i].bookid, &b[i].title , &b[i].price);
	}
	Display(b);
	return 0;
}
