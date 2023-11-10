#include <stdio.h>
#include <conio.h>

struct Employee
{
    int id;
    char name[50];
    char dept[50];
    int salary;
} e[3];

void main()
{
    int total_salary = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n--Employee %d--", i + 1);
        printf("\n\nEnter id: ");
        scanf("%d", &e[i].id);
        printf("Enter name: ");
        scanf("%s", &e[i].name);
        printf("Enter dept: ");
        scanf("%s", &e[i].dept);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
        total_salary += e[i].salary;
    }

    printf("\n\nTotal salary of all employees: %d", total_salary);
    getch();
}
