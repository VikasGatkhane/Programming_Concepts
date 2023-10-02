#include<stdio.h>
int main(){


 	int fib[100],n;
 	
 	printf("enter the n:\n");
 	scanf("%d",&n);
 	fib[0]=0;
 	fib[1]=1;
 	
 	for(int i=2;i<n;i++){
 	
 		fib[i]=fib[i-1]+fib[i-1];
 		printf("%d, ",fib[i]);
 	
 	
 	
 	}






	return 0;
}
