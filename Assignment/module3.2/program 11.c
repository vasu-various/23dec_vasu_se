#include <stdio.h>

int main() 
{
	int n, remainder, v=1, sum;
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
	sum=a[1]+a[3];
	sum=sum*(-1);
	printf("First and last number summation is : %d",sum);
	return 0;
}
