#include <conio.h>
#include <stdio.h>

int findmax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void main()
{
    int a, b, max;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    max = findmax(a, b);

    printf("The maximum value is %d", max);
    getch();
}