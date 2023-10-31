#include <conio.h>
#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping, a= %d and b= %d", a, b);
}

void main()
{
    int a, b;

    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping, a= %d and b= %d", a, b);

    swap(a, b);

    getch();
}