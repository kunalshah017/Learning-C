#include <conio.h>
#include <stdio.h>
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Divisors are:\n");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }

    getch();
}