// accept no from user and perform addition of every digit
// 1234 = 1+2+3+4 = 10

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nSum of digits is = ");

    while (n != 0)
    {
        digit = n % 10;
        printf("%d + ", digit);
        sum = sum + digit;
        n = n / 10;
    }

    printf("\b\b= %d", sum);

    getch();
}