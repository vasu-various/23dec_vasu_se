#include<stdio.h>
void main()
{
	int v,k,i=1;
	for(v=1; v<=5; v++)
	{
		for(k=1; k<=v; k++)
		{
			printf("%d ",i);
			i++;
		}
		printf("\n");
	}
}
