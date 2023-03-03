#include <stdio.h>
#include <string.h>
void main()
{
	    char str[100], tmp, rev[100];
	    int a, b;
	    printf("Enter string: ");
	    scanf("%s", &str);
	    strcpy(rev,str);
	    a = 0;
	    b= strlen(str) - 1;
	    while(a < b)
     {
		        tmp = str[a];
		        str[a] = str[b];
		        str[b] = tmp;
		        a++;
		        b--;
	    }
	    printf("Reverse string: %s\n", str);

	    if(strcmp(rev,str) == 0)
		        printf("%s is palindrome!\n", str);
	    else
		        printf("%s is not palindrome!\n", str);
} 