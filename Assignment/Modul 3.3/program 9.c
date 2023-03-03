#include <stdio.h>
struct vasu
{
    int no, age;
    char name[20], address[121];
};
void main()
{
    struct vasu e;

    printf("Enter the emp_no of the Employee: ");
    scanf("%d", &e.no);

    printf("Enter the age of the Employee: ");
    scanf("%d", &e.age);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.name, 30, stdin);

    printf("Enter the adrress of the Employee: ");
    fgets(e.address, 100, stdin);

    printf("\nEmployee Details:\n");
    printf("emp_no: %d\n", e.no);
    printf("emp_name: %s", e.name);
    printf("emp_age: %d\n", e.age);
    printf("emp_address: %s", e.address);
}
