#include<stdio.h>
void main()
{
	int y;
	float d;
	printf("Enter a year : ");
	scanf("%d",&y);
	printf("The days of the %d year is : %d Days", y,y*365);
	
	printf("\n------------------------------------------------------");
	printf("\nEnter a days : ");
	scanf("%f",&d);
	printf("The year of the %f days is : %f year", d,d/365);
}
