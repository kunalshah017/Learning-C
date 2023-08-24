#include <stdio.h>
#include <conio.h>

void main()
{
    int age, years_remaining;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible to vote.");
    else
    {
        years_remaining = 18 - age;
        printf("You are not eligible to vote. \nYou have %d years remaining until you become eligible.", years_remaining);
    }

    getch();
}
