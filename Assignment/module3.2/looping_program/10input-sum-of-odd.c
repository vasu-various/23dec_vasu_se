#include<stdio.h>
int main()
{
	int i,v, sum=0;
	printf("Enter a 10 numbers");
	for(i=1; i<=10; i++)
	{
		printf("\nEnter number %d = ",i);
		scanf("%d",&v);
		if(v%2!=0)
		{
			sum=sum+v;
		}
	}
	printf("\nSum of odd number is : %d",sum);
}
