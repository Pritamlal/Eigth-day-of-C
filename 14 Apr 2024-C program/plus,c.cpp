#include<stdio.h>
int main()
{
	int i,j,N;
	printf("Enter the number::");
	scanf("%d",&N);
	for(i=1;i<=(2*N)-1;i++)
	{
		if(i==N)
		{
		
		for(j=1;j<=(N*2)-1;j++)
		{
			printf("*");
		}
		
		}
		
		else
		{
			for(j=1;j<=N-1;j++)
			{
				printf(" ");	
			}	
			printf("*");
		}	
	printf("\n");
}
}
