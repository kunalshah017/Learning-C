#include <conio.h>
#include <stdio.h>
void main()
{
    int n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("reverse is = ");
    while (n != 0)
    {
        digit = n % 10;
        printf("%d", digit);
        n = n / 10;
    }

    getch();
}