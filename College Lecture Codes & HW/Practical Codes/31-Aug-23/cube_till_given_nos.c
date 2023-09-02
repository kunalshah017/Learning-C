#include <stdio.h>
#include <conio.h>

void main()
{
    int n, k;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (k = 1; k <= n; k++)
    {
        printf("%d^3 = %d\n", k, k * k * k);
    }

    getch();
}