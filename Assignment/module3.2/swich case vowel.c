#include<stdio.h>
void main()
{
	int v, a;
	printf(" 1. Vowel \n 2. Consonant");
	printf("\nEnter your choice :");
	scanf("%d",&v);
	switch(v)
	{
		case 1:
			printf("\n 1. A  \n 2. E \n 3. I \n 4. O \n 5. U");
			printf("\nEnter Your Choice : ");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
					printf("Your choice is A");
					break;
				case 2:
					printf("Your choice is E");
					break;
				case 3:
					printf("Your choice is I");
					break;
				case 4:
					printf("Your choice is O");
					break;
				case 5:
					printf("Your choice is U");
					break;
				default:
					printf("Enter a valid Choice");
					break;
			}
			
			break;
		case 2:
			printf("Your choice is Consonant");
			break;
		default :
			printf("Enter a valid Choice");
			break;
	}
}
