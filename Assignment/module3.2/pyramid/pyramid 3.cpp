#include<stdio.h>
int main()
{
	int v,k;
	char i='A';
	for(v=1; v<=5; v++)
	{
		for(k=1; k<=v; k++)
		{
			printf("%c ",i);
			i=i+1;
		}
		printf("\n");
	}
}
