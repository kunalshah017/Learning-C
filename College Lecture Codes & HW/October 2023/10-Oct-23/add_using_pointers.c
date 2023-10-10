#include <conio.h>
#include <stdio.h>
void main()
{
    int a = 20, b = 30, *P, *Q;

    P = &a;
    Q = &b;

    printf("Sum = %d\n", *P + *Q);
    getch();
}