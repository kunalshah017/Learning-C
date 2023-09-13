#include <stdio.h>
#include <conio.h>

void square(int u, int p);

void main()
{
    int p, u;

    printf("Enter a Number = ");
    scanf("%d", &u);
    printf("Enter Power = ");
    scanf("%d", &p);

    square(u, p);

    getch();
}

void square(int u, int p)
{
    int ans = 1;
    for (int c = 1; c <= p; c++)
    {
        ans = ans * u;
    }

    printf("%d ^ %d = %d", u, p, ans);
}