#include <stdio.h>
#include <conio.h>

void main()
{
    int n, digit, product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Product of digits is = ");

    while (n != 0)
    {
        digit = n % 10;
        printf("%d x ", digit);
        product = product * digit;
        n = n / 10;
    }

    printf("\b\b= %d", product);

    getch();
}