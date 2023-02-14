#include<stdio.h>
void main()
{
	int v;
	int i=1;
	printf("Enter a number for table : ");
	scanf("%d",&v);
	do
	{
		printf("\n %d x %d = %d",v,i,v*i);
		i++;
	}while(i<11);
}
