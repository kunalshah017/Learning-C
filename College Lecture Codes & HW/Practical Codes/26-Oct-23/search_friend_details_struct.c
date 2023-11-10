#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Friend
{
    char name[50];
    char nickname[50];
    char dob[50];
    char phone[50];
} f[3];

void main()
{
    char name[50];
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n--Friend %d--", i + 1);
        printf("\n\nEnter name: ");
        scanf("%s", &f[i].name);
        printf("Enter nickname: ");
        scanf("%s", &f[i].nickname);
        printf("Enter dob: ");
        scanf("%s", &f[i].dob);
        printf("Enter phone: ");
        scanf("%s", &f[i].phone);
    }

    printf("\n\nEnter name to search: ");
    scanf("%s", &name);

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(f[i].name, name) == 0)
        {
            printf("\n\n--Friend %d--", i + 1);
            printf("\n\n name: %s", f[i].name);
            printf("\n nickname: %s", f[i].nickname);
            printf("\n dob: %s", f[i].dob);
            printf("\n phone: %s", f[i].phone);
        }
    }
    getch();
}