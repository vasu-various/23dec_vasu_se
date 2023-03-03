#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[30],address[100];
    int no,age;    
} Employee;
 
void main()
{
    int n=5;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);

        printf("no: ");
        scanf("%d",&employees[i].no);

        printf("Name: ");
        scanf("%s",employees[i].name);
        
        printf("age: ");
        scanf("%d",&employees[i].age);

        printf("Address: ");
        scanf("%s",employees[i].address);
        printf("\n");
    }

    printf("All Employees Details are:-\n");
    for(int i=0; i<n; i++)
    {
        printf("no: ");
        printf("%d \n",employees[i].no);

        printf("Name: ");
        printf("%s \n",employees[i].name);
 
        printf("age: ");
        printf("%d \n",employees[i].age);

        printf("Address: ");
        printf("%s \n",employees[i].address);
 
        printf("\n");
    }
}