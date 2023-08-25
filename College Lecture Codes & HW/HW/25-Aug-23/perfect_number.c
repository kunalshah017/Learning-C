#include <conio.h>
#include <stdio.h>
void main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Divisors are:\n");
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("\n%d is a perfect number\n", n);
    else
        printf("\n%d is not a perfect number\n", n);

    getch();
}