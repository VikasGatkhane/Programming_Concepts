#include<stdio.h>
void acceptM(int matrix1[3][3])
{
	int i, j;

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
}

void displayM(int matrix1[3][3] )
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
}
void transpose(int M[3][3], int T[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			T[j][i]=M[i][j];
		}
	}
}
int main()
{
	int M1[3][3], M2[3][3], T[3][3];
	printf("Enter the matrix 1 : \n");
	acceptM(M1);
	printf("You entered matrix\n");
	displayM(M1);
	printf("Enter the matrix 2 : \n");
	acceptM(M2);
	printf("You entered matrix \n");
	displayM(M2);
	transpose(M1,T);
	printf("Transpose of matrix 1 is : \n");
	displayM(T);
	
	
}
