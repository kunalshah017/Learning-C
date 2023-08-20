#include <conio.h>
#include <stdio.h>
void main()
{
    int base, power;

    printf("Enter base = ");
    scanf("%d", &base);

    printf("Enter power = ");
    scanf("%d", &power);

    int result = base;

    for (int c = power - 1; c > 0; c--)
    {
        result = result * base;
    }

    printf("%d^%d = %d", base, power, result);
    getch();
}