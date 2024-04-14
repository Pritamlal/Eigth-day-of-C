#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<N*2;i++)
	{
		for(j=1;j<=N;j++)
		{
			if((i==1 && (j==1 || j==N))||(i==N && (j==1||j==N))||(i==2*N-1 && (j==1||j==N)))
			printf(" ");
			else if(i==1||i==N||i==(2*N)-1||j==1||j==N)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	
}
