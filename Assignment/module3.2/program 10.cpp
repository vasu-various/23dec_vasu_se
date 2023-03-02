#include <stdio.h>

int main() 
{
	int n, remainder, sum=0, ans;
	int a[10];
	printf("Enter a intiger: ");
 	scanf("%d", &n);
	while (n != 0) 
	{
    	remainder = n % 10;
    	sum=sum+remainder;
    	n = n/10;
	}
	ans=sum*(-1);
	printf("\n summation of this number is : %d ",ans);
	return 0;
}
