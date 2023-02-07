#include<stdio.h>
void main()
{
	int a,b;
	int add,sub,mul,div,mod;
	printf("Enter a first number :");
	scanf("%d",&a);
	printf("Enter a second number :");
	scanf("%d",&b);
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	mod = a%b;
	printf("\nAddition is = %d",add);
	printf("\nSubtraction is = %d",sub);
	printf("\nMultiplication is = %d",mul);
	printf("\nDivition is = %d",div);
	printf("\nModulo is = %d",mod);
}
