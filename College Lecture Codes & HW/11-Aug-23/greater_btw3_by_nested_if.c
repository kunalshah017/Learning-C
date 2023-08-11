#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;

    printf("Enter 3 numbers = ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest number", a);
        }

        else
        {
            printf("%d is greatest number", c);
        }
    }
    else if (b > c)
    {
        printf("%d is greatest number", b);
    }
    else
    {
        printf("%d is greatest number", c);
    }

    getch();
}
