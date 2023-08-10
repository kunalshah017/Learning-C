#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    printf("Enter 3 numbers = ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is the greatest number", a);
    }

    else if (b > a && b > c)
    {
        printf("%d is the greatest number", b);
    }

    else if (c > a && c > a)
    {
        printf("%d is the greatest number", c);
    }

    else if (a == b && b == c)
    {
        printf("all three are equal");
    }

    if (a == b && c > a)
    {
        printf("\n%d and %d are equal", a, b);
    }

    else if (c == b)
    {
        printf("\n%d and %d are equal", c, b);
    }

    else if (a == c)
    {
        printf("\n%d and %d are equal", a, c);
    }

    getch();
}