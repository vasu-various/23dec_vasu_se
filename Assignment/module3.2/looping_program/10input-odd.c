#include<stdio.h>
void main()
{
	int i,v, odd=0;
	printf("Enter a 10 numbers");
	for(i=1; i<=10; i++)
	{
		printf("\nEnter number %d = ",i);
		scanf("%d",&v);
		if(v%2!=0)
		{
			odd=odd+1;
		}
	}
	printf("\nTotal even number is : %d",odd);
}
