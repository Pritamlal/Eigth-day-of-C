#include<stdio.h>
int main()
{
	int i,j,N;
	printf("ENter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(i==1||j==N||j==1||i==N)
			printf("1 ");
			else
			printf("0 ");
		}
		printf("\n");
	}
}
