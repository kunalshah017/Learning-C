#include <conio.h>
#include <stdio.h>

void main()
{
    int a = 2;

    void *ptr;

    ptr = &a;

    printf("After typecasting : %d", *(int *)ptr);

    getch();
}