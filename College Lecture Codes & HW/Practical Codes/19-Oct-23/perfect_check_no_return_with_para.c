#include <conio.h>
#include <stdio.h>

void perfect_check(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
    {
        printf("The number is perfect.");
    }
    else
    {
        printf("The number is not perfect.");
    }
}

void main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    perfect_check(n);

    getch();
}