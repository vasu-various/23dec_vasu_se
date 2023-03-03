#include<stdio.h>
#include<stdlib.h>
void add(int m[3][3], int n[3][3], int sum[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sum[i][j] = m[i][j] + n[i][j];
}

void subtract(int m[3][3], int n[3][3], int sub[3][3])
{
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
      sub[i][j] = m[i][j] - n[i][j];
}

void multiplication(int m[3][3], int n[3][3], int mul[3][3])
{
  for(int i=0; i < 3; i++)
  {
    for(int j=0; j < 3; j++)
    {
      mul[i][j] = 0; 
      for (int k = 0; k < 3; k++)
      mul[i][j] += m[i][k] * n[k][j];
    }
  }
}

void display(int matrix[3][3])
{
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
      printf("%d\t",matrix[i][j]);

    printf("\n"); 
  }
}

void main()
{
  int a[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  int c[3][3];

  printf("First Matrix:\n");
  display(a);
  printf("Second Matrix:\n");
  display(b);

  int choice;

  do
  {
    printf("\nChoose the matrix operation,\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add(a, b, c);
        printf("Sum of matrix: \n");
        display(c);
        break;
      case 2:
        subtract(a, b, c);
        printf("Subtraction of matrix: \n");
        display(c);
        break;
      case 3:
        multiplication(a, b, c);
        printf("Multiplication of matrix: \n");
        display(c);
        break;
     case 4:
        exit(0);
      default:
        printf("Invalid input.\n");
        printf("Please enter the correct input.\n");
    }
  }while(1);
}