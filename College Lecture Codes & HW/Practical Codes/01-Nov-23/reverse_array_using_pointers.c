#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[5], *p;
    p = arr;
    printf("\n\nEnter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    printf("\n\nReverse order: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", *(p + i));
    }
    getch();
}