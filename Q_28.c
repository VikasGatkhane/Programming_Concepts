//matrix multiplication
#include<stdio.h>
void accept(int matrix1[3][3])
{
	printf("Enter the matrix element : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
}
void matrixmultiplication(int matrix1[3][3],int matrix2[3][3],int result[3][3])
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			for(int k=0; k<3; k++)
			{
				result[i][j]=result[i][j]+matrix1[i][k]+matrix2[k][j];
			}
		}
	}	
}
void display(int matrix1[3][3])
{
	printf("Element of matrix are as follows : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int matrix1[3][3], matrix2[3][3] ,result[3][3];
	accept(matrix1);
	accept(matrix2);
	matrixmultiplication(matrix1,matrix2,result);
	display(result);
	return 0; 
}
