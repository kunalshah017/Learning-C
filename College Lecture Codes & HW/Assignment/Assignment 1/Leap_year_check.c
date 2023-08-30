// Source code for Assignment Question 2

#include <stdio.h>
#include <conio.h>

void main()
{
    int year;

    printf("Enter a Year (yyyy) = ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a Leap Year", year);
    }

    getch();
}