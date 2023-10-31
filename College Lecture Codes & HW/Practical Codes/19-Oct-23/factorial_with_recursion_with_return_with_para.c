#include <conio.h>
#include <stdio.h>

int factorial(int u)
{
    int fact;

    if (u == 0)
    {
        return 1;
    }
    else
    {
        fact = u * factorial(u - 1);
        return fact;
    }
}

void main()
{

    int u, fact;

    printf("Enter the number: ");
    scanf("%d", &u);

    fact = factorial(u);

    printf("The factorial of %d is = %d", u, fact);
    getch();
}