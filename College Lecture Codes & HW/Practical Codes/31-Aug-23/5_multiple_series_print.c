#include <stdio.h>
#include <conio.h>

void main()
{
    int n = 1, u;

    printf("Enter a Number = ");
    scanf("%d", &u);

    for (n = 1; n <= u; n++)
    {
        printf("%d %d ", n, n * 5);
    }

    getch();
}