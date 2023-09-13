#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    printf("enter no of rows = ");
    scanf("%d", &n);

    printf("\n");

    for (int c = 1; c <= n; c++)
    {
        for (int u = 1; u <= c; u++)
        {
            printf("*");
        }
        printf("\n");
    }

    getch();
}