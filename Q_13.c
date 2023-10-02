#include<stdio.h>
//program to check number is palindrome or not 
int main()
{
	int a, flag=0;
	printf("Enter the number : \n");
	if(a==0 || a==1){
		flag=1;
		break;
	}
	else
	{
		for(int i=0; i<a; i++)
		{
			if((a%i)==0){
				flag=1;
			}
			break;
		}
	}
	if(flag==0)
	{
		printf("The number is prime number. \n");
	}
	else{
		printf("The given number is not a prime number\n");
	}
	return 0;
}
