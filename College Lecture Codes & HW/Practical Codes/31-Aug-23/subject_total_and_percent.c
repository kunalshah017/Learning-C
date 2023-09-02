#include <stdio.h>
#include <conio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5, total, percent;

    printf("Enter Marks for Subject 1 : ");
    scanf("%d", &sub1);

    printf("Enter Marks for Subject 2 : ");
    scanf("%d", &sub2);

    printf("Enter Marks for Subject 3 : ");
    scanf("%d", &sub3);

    printf("Enter Marks for Subject 4 : ");
    scanf("%d", &sub4);

    printf("Enter Marks for Subject 5 : ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    percent = total / 5;

    printf("Total Marks = %d", total);
    printf("\nPercentage = %d%%", percent);

    getch();
}