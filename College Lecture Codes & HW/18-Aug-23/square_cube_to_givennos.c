#include <conio.h>
#include <stdio.h>

int main()
{

    int n;

    printf("enter a number = ");
    scanf("%d", &n);

    for (int c = 1; c <= n; c++)
    {
        printf("\n\nsquare of %d = %d", c, c * c);
        printf("\ncude of %d = %d", c, c * c * c);
    }

    getch();
}