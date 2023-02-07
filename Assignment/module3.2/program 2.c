#include<stdio.h>
void main()
{
	int a, b;
	printf("Enter a: ");
  	scanf("%d", &a);
  	printf("Enter b: ");
  	scanf("%d", &b);
  	a = a - b;// if a= 10, b=15 a=10-15, a=-5   
 	b = a + b;// b = -5+15 b=10
  	a = b - a;// a = 10-(-5) a=15
  	printf("The value of a = %d /n value of b = %d", a,b);
}
