#include<stdio.h>
void main()
{
    int a, b;
    printf("input value of a :");
    scanf("%d",&a);
    printf("input value of b :");
    scanf("%d",&b);s
    a -= b;
    printf("subtraction is :%d",a);
    a *= b;
    printf("\nmultiplication is :%d",a);
    a /= b;
    printf("\ndivision is :%d",a);
}