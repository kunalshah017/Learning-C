#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("\n\nEnter 2 numbers: ");
    scanf("%d %d", p1, p2);
    printf("\n\nAddition: %d", *p1 + *p2);
    printf("\n\nSubtraction: %d", *p1 - *p2);
    printf("\n\nMultiplication: %d", *p1 * *p2);
    printf("\n\nDivision: %d", *p1 / *p2);
    getch();
}