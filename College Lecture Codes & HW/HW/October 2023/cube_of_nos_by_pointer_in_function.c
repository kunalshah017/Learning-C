#include <conio.h>
#include <stdio.h>

int cube(int *P)
{
    return *P * *P * *P;
}

void main()
{
    int u, *P;

    printf("Enter a number : ");
    scanf("%d", &u);

    P = &u;

    printf("Cube = %d", cube(P));

    getch();
}