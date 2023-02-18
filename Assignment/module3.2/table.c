#include<stdio.h>
void main()
{
	int v,i;
	printf("Enter a number for table : ");
	scanf("%d",&v);
	for(i=1; i<11; i++)
	{
		printf("\n%d x %d = %d",v,i,v*i);
	}
}
