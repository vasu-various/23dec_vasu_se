#include<stdio.h>
int main()
{
	int v,k;
	for(v=1; v<=5; v++)
	{
		for(k=1; k<=v; k++)
		{
			printf("%c ",'A'+k-1);
		}
		printf("\n");
	}
}
