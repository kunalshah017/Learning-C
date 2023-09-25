#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, a[100];

    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("Binary of the given number= ");

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    getch();
}