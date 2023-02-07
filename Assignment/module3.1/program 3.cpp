#include<stdio.h>
#define pi 3.14
int main()
{
	int r, c, l,w, re,b,h,t;
	printf("Enter the value of radious : ");
	scanf("%d",&r);
	c = pi*r*r;
	printf("The Aria of circle is : %d",c);
	printf("\n----------------------------------------------");
	printf("\nEnter the value of lenth : ");
	scanf("%d",&l);
	printf("Enter the value of width : ");
	scanf("%d",&w);
	re = l*w;
	printf("The Aria of rectangle is : %d",re);
	printf("\n----------------------------------------------");
	printf("\nEnter the value of base : ");
	scanf("%d",&b);
	printf("Enter the value of Hight : ");
	scanf("%d",&h);
	t = (b*h)/2;
	printf("The Aria of triangle is : %d",t);
}
