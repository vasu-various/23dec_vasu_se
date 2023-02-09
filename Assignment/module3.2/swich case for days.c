#include<stdio.h>
void main()
{
	int v;
	printf(" 1. Monday \n 2. tuesday \n 3. wednesday \n 4. Thusday \n 5. Friday \n 6. saturday \n 7. Sunday");
	printf("\n\nEnter Your Choice : ");
	scanf("%d",&v);
	switch(v)
	{
		case 1:
			printf("Your Choice is Monday");
			break;
		case 2:
			printf("Your Choice is tuesday");
			break;	
		case 3:
			printf("Your Choice is wednesday");
			break;
		case 4:
			printf("Your Choice is Thusday");
			break;
		case 5:
			printf("Your Choice is Friday");
			break;
		case 6:
			printf("Your Choice is Saturday");
			break;
		case 7:
			printf("Your Choice is sunday");
			break;
		default :
			printf("Enter a valid number");
			break;
	}
}
