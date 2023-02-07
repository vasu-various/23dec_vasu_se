#include<stdio.h>
int main()
{
	int y, ans;
	printf("Enter a year : ");
	scanf("%d",&y);
	ans = y%4;
	if(ans==0)
	{
		printf("The year %d is leap year",y);
	}
	else
	{
		printf("The year %d is not a leap year",y);
	}
}
