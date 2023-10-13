#include <conio.h>
#include <stdio.h>

int greater(int *P, int *Q)
{
    if (*P > *Q)
    {
        return *P;
    }
    else
    {
        return *Q;
    }
}

void main()
{
    int a, b, *P, *Q;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    P = &a;
    Q = &b;

    printf("Greater = %d", greater(P, Q));
}