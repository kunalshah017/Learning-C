#include <conio.h>
#include <stdio.h>

void swap(int *p1, int *p2);

void main()
{
    int a, b;

    printf("a = ");
    scanf("%d", &a);

    printf("\nb = ");
    scanf("%d", &b);

    swap(&a, &b);

    getch();
}

void swap(int *p1, int *p2)
{
    int b = *p2;

    *p2 = *p1;
    *p1 = b;

    printf("\na = %d\n", *p1);
    printf("b = %d", *p2);
}