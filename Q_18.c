#include<stdio.h>
#include<stdlib.h>
void Charline(int len , char ch)
{
	for(int i=0; i<len; i++)
	{
		printf("%c",ch);
	}
	printf("\n");
}
int main()
{
	int len;
	char ch;
	printf("Enter length of border: \n");
	scanf("%d",&len);
	getchar();
	printf("Enter the character\n");
	scanf("%c",&ch);
	//Charline(len, ch);
	printf("Data type  \t\t  Size\n");
	Charline(len,ch);
	printf("Integer  \t\t   4\n");
	Charline(len, ch);
	printf("Character \t\t   1\n");
	Charline(len, ch);
	printf("Float   \t\t   1\n");
	Charline(len,ch);
	return 0;
}
