#include <stdio.h>
void v();
int main() 
{
    printf("Enter your String:");
    v();
    return 0;
}
void v()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        v();
        printf("%c", c);
    }
}