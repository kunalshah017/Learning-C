#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater", a);
    }
    else
    {
        if (b > a)
        {
            printf("%d is greater", b);
        }
        else
        {
            printf("numbers are equal");
        }
    }

    getch();
}