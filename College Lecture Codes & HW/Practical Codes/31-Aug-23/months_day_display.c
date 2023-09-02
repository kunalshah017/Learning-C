#include <stdio.h>
#include <conio.h>

void main()
{
    int month;

    printf("Enter Number of Month : ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("31 Days");
        break;

    case 2:
        printf("28/29 Days");
        break;

    case 3:
        printf("31 Days");
        break;

    case 4:
        printf("30 Days");
        break;

    case 5:
        printf("31 Days");
        break;

    case 6:
        printf("30 Days");
        break;

    case 7:
        printf("31 Days");
        break;

    case 8:
        printf("31 Days");
        break;

    case 9:
        printf("30 Days");
        break;

    case 10:
        printf("31 Days");
        break;

    case 11:
        printf("30 Days");
        break;

    case 12:
        printf("31 Days");
        break;

    default:
        printf("Invalid Month");
    }

    getch();
}