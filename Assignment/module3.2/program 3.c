#include<stdio.h>
void main()
{
	int a,ans;
	printf("Enter any number : ");
	scanf("%d",&a);
	ans = a%2;
	(ans == 0) ? printf("Your number is even") : printf("Your number is odd");
}
