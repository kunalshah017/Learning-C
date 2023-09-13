#include <stdio.h>
#include <conio.h>

void main()
{
    int age;

    printf("Enter your age = ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("not elegible for working");
    }
    else
    {
        if (age >= 18 && age <= 50)
        {
            printf("Elegible for working");
        }
        else
        {
            printf("age not satisfactory");
        }
    }

    getch();
}