#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if(a<=10)
	{
		printf("Your nunber is less than 11");
	}
	else if(a>10 && a<=20)
	{
		printf("Your number is beetween 11 to 20 ");
	}
	else
	{
		printf("your number is more than 20");
	}
}

