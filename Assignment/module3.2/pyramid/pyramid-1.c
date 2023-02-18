#include<stdio.h>
void main()
{
	int v,k;
	for(v=1; v<=5; v++)
	{
		for(k=1; k<=v; k++)
		{
			if(k%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
