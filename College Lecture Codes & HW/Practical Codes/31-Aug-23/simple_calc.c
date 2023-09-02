#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, ans;
    char op;

    printf("Enter the Expression : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("%d %c %d = %d", num1, op, num2, num1 + num2);
        break;

    case '-':
        printf("%d %c %d = %d", num1, op, num2, num1 - num2);
        break;

    case '*':
        printf("%d %c %d = %d", num1, op, num2, num1 * num2);
        break;

    case '/':
        printf("%d %c %d = %d", num1, op, num2, num1 / num2);
        break;
    }

    getch();
}