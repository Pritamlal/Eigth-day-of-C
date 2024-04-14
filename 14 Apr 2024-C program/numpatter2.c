#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter hte number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(i%2==1)
			printf("1 ");
			else
			printf("0 ");
		}
		printf("\n");
	}
}
