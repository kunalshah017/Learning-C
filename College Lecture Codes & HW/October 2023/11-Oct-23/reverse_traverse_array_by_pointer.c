#include <conio.h>
#include <stdio.h>

void main()
{
    int arr[3] = {69, 50, 75};

    int *ptr;

    ptr = &arr[2];

    for (int c = 0; c < 3; c++)
    {
        printf("\n*ptr = %d", *ptr);
        printf("\nptr = %p\n", ptr);

        ptr--;
    }

    getch();
}