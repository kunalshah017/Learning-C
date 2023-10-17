#include <conio.h>
#include <stdio.h>

void main()
{
    int *ptr;
    int **ptr2;

    int a = 10;

    ptr = &a;
    ptr2 = &ptr;

    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);
    printf("ptr2 = %p\n", ptr2);
    printf("*ptr2 = %p", *ptr2);

    getch();
}