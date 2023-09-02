#include <stdio.h>
#include <conio.h>

void main()
{
    char myarray[5];

    for (int c = 0; c < 5; c++)
    {
        printf("Enter 5 Values for Array :");
        scanf("%c", &myarray[c]);
    }

    printf("\nYour Array : ");
    for (int c = 0; c < 5; c++)
    {
        printf("%c ", myarray[c]);
    }

    printf("\nReversed Array : ");
    for (int c = 4; c >= 0; c--)
    {
        printf("%c ", myarray[c]);
    }

    getch();
}