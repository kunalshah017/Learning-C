#include <conio.h>
#include <stdio.h>
void main()
{
    float a, b;
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Addition: %f + %f = %f\n", a, b, a + b);
    printf("Subtraction: %f - %f = %f\n", a, b, a - b);
    printf("Multiplication: %f * %f = %f\n", a, b, a * b);
    if (b != 0)
    {
        printf("Division: %f / %f = %f\n", a, b, a / b);
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
    getch();
}
