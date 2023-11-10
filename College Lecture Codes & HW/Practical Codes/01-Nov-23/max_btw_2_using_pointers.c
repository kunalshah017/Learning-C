#include <stdio.h>
#include <conio.h>

int max(int *p1, int *p2)
{
    if (*p1 > *p2)
        return *p1;
    else
        return *p2;
}

void main()
{
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("\n\nEnter 2 numbers: ");
    scanf("%d %d", p1, p2);
    printf("\n\nMax: %d", max(p1, p2));
    getch();
}