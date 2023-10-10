#include <conio.h>
#include <stdio.h>
void main()
{
    int myarray[10], u;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &myarray[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &u);

    for (int c = 0; c < 10; c++)
    {
        if (myarray[c] == u)
        {
            printf("The number %d is present in the array at index %d\n", u, c);
            printf("The number %d is present in the array at position %d\n", u, c + 1);
            break;
        }
    }

    getch();
}