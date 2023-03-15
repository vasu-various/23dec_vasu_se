#include<stdio.h>
int main()
{
	int mat[3][3];
	int i,j;
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf("\nEnter a number of [%d][%d] : ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=1; i<=3; i++)
	{
		for(j=1; j<=3; j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
}
