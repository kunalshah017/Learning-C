#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter a number = ");
    scanf("%d", &n);

    (n > 0) ? printf("number is positive") : printf("number is negative");

    getch();
}