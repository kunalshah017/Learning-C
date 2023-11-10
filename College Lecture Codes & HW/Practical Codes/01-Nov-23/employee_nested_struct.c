#include <stdio.h>
#include <conio.h>

struct Employee
{
    int id;
    char name[50];
    char dept[50];
    struct Date
    {
        char date[50];
    } doj;
} e[3];

void main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n--Employee %d--", i + 1);
        printf("\n\nEnter id: ");
        scanf("%d", &e[i].id);
        printf("Enter name: ");
        scanf("%s", &e[i].name);
        printf("Enter dept: ");
        scanf("%s", &e[i].dept);
        printf("Enter date of joining: ");
        scanf("%s", &e[i].doj.date);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n\n--Employee %d--", i + 1);
        printf("\n\n id: %d", e[i].id);
        printf("\n name: %s", e[i].name);
        printf("\n dept: %s", e[i].dept);
        printf("\n date of joining: %s", e[i].doj.date);
    }
    getch();
}
