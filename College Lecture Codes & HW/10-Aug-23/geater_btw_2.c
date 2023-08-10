#include <stdio.h>
#include <conio.h>

void main()
{

    int a, b;

    printf("Enter 2 numbers = ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is a greater number", a);
    }
    else if (b > a)
    {
        printf("%d is a greater number", b);
    }
    else
    {
        printf("%d and %d are equal", a, b);
    }
    getch();
}