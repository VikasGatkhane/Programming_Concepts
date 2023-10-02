#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int l,b;
	char ch;
	printf("Enter length and breath of rectangle : \n");
	scanf("%d%d",&l,&b);
	printf("Enter the character ");
	__fpurge(stdin);
	printf("Enter character: \n");
	scanf("%c",&ch);
	for(int i=0; i<l; i++)
	{
		printf("%c",ch);
	}
	printf("\n");
	for(int i=0;i<b;i++)
	{
		printf("%c",ch);
		for(int j=0; j<l-2;j++)
		{
			printf(" ");
		}
		printf("%c\n",ch);
	}
	for(int i=0; i<l ; i++)
	{
		printf("%c", ch);
	}
	printf("\n");
	return 0;
}
