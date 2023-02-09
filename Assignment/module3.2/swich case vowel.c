#include<stdio.h>
void main()
{
	int v;
	printf(" 1. Vowel \n 2. Consonant");
	printf("\nEnter your choice :");
	scanf("%d",&v);
	switch(v)
	{
		case 1:
			printf("Your Choice is Vowel");
			break;
		case 2:
			printf("Your choice is Consonant");
			break;
		default :
			printf("Enter a valid Choice");
			break;
	}
}
