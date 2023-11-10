#include <stdio.h>
#include <conio.h>
struct Student
{
    char name[50];
    int roll;
    char city[50];
    char phone[50];
} s[2];

void main()
{
    for (int i = 0; i < 2; i++)
    {
        printf("\n\n--Student %d--", i + 1);
        printf("\n\nEnter name: ");
        scanf("%s", &s[i].name);
        printf("Enter roll no: ");
        scanf("%d", &s[i].roll);
        printf("Enter city: ");
        scanf("%s", &s[i].city);
        printf("Enter phone: ");
        scanf("%s", &s[i].phone);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\n\n--Student %d--", i + 1);
        printf("\n\n name: %s", s[i].name);
        printf("\n roll no: %d", s[i].roll);
        printf("\n city: %s", s[i].city);
        printf("\n phone: %s", s[i].phone);
    }
    getch();
}
