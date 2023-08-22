#include <conio.h>
#include <stdio.h>
void main()
{
    int n, digit = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int input = n;

    while (n != 0)
    {
        digit = (digit * 10) + n % 10;
        n = n / 10;
    }

    printf("Reversed is = %d", digit);

    if (input == digit)
        printf("\nPalindrome");
    else
        printf("\nNot Palindrome");

    getch();
}