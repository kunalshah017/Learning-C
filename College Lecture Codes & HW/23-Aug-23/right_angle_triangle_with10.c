#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    printf("enter no of rows = ");
    scanf("%d", &n);

    printf("\n");

    printf("1\n");

    for (int c = 1; c <= n - 1; c++)
    {
        for (int u = 1; u <= c; u++)
        {
            printf("1");
            printf("0");
        }
        printf("\n");
    }

    getch();
}