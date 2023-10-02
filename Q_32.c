#include<stdio.h>
typedef struct Book{
	int bookid; 
	char title[20];
	double price;
}BOOK;
int main()
{
	BOOK b1;
	printf("Enter the data of book(bookid , title , price ) :\n");
	scanf("%d%s%lf", &b1.bookid, &b1.title , &b1.price);
	printf("You entered the data : %d %s %lf \n ",b1.bookid, b1.title , b1.price );
	return 0;
}
