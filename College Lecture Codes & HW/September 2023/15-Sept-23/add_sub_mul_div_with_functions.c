#include <conio.h>
#include <stdio.h>

int operation(int a, int b);

char op;

void main()
{
    int a, b;

    printf("Enter Expression \n>>");
    scanf("%d %c %d", &a, &op, &b);

    int ans = operation(a, b);

    if (ans == 404)
    {
        printf("Error !");
    }
    else
    {
        printf("\n%d %c %d = %d", a, op, b, ans);
    }

    getch();
}

int operation(int a, int b)
{
    switch (op)
    {
    case '+':
        return (a + b);
        break;

    case '-':
        return (a - b);
        break;

    case '*':
        return (a * b);
        break;

    case '/':
        return (a / b);
        break;

    default:
        return 404;
        break;
    }
}