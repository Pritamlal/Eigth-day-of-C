#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=N;j++)
		{
			if(j%2==1)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
}
