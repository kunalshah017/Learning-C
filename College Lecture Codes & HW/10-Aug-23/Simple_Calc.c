#include <conio.h>
#include <stdio.h>

void main()
{
    int a, b;
    char op;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator: ");
    getch();
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (op == '-')
    {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (op == '*')
    {
        printf("%d * %d = %d", a, b, a * b);
    }
    else if (op == '/')
    {
        printf("%d / %d = %d", a, b, a / b);
    }
    else
    {
        printf("Invalid Operator");
    }
    getch();
}