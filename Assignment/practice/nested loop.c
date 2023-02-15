#include<stdio.h>
void main()
{
	int v,k;
	for(v=0; v<5; v++)
	{
		for(k=0; k<=v; k++)
		{
			printf("%d ",v);
		}
		printf("\n");
	}
}
