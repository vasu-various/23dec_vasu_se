#include <stdio.h>

int main() 
{
	int n, remainder, v=1, i;
	int a[3];
	printf("Enter a 3 digit intiger: ");
 	scanf("%d", &n);
	while (n != 0) 
	{
    	remainder = n % 10;
    	a[v]=remainder;
    	++v;
    	n = n/10;
	}
	/*
	for(i=1; i<=3; i++)
	{
		printf("%d",a[i]);
	}*/
	if(a[1]>a[2])
	{
		if(a[1]>a[3])
		{
			printf("max is %d",a[1]);
		}
		else
		{
			printf("max is %d",a[3]);
		}
	}
	else
	{
		if(a[2]>a[3])
		{
			printf("max is %d",a[2]);
		}
		else
		{
			printf("max is %d",a[3]);
		}
	}
	return 0;
}
