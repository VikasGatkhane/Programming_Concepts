#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character :\n");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
	{
		ch=ch+32;
	}
	else if (ch>=90 && ch<=122)
	{
	 	ch=ch-32;
	}
	else
	{
	printf("Not an alfabet \n");
	}
	printf("Opposite case alfabet - %c\n",ch);
	return 0;
}
