#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    printf("enter no of rows = ");
    scanf("%d", &n);

    int c, u, j = n;

    printf("\n");

    for (c = 1; c <= n; c++)
    {
        for (u = 1; u <= c; u++)
        {
            printf(" ");
        }
        for (int k = 1; k <= j; k++)
        {
            printf("*");
        }
        j--;
        printf("\n");
    }

    getch();
}