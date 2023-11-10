//  create function swap to perform swapping of two numbers using
// three variables using pointers.

#include <stdio.h>
#include <conio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void main()
{
    int a, b, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("\n\nEnter 2 numbers: ");
    scanf("%d %d", p1, p2);
    printf("\n\nBefore swapping: %d %d", *p1, *p2);
    swap(p1, p2);
    printf("\n\nAfter swapping: %d %d", *p1, *p2);
    getch();
}