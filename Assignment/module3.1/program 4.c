//WAP to find simple interest 
#include<stdio.h>
void main()
{
	float p,r,t,ans;
	printf("Enter a amount : ");
	scanf("%f",&p);
	printf("Enter a rat of intrest : ");
	scanf("%f",&r);
	printf("Enter a time in year : ");
	scanf("%f",&t);
	ans = (p*r*t)/100;
	printf("The simple intrest is : %f",ans);
}
