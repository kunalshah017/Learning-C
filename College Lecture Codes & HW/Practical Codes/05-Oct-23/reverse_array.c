#include <conio.h>
#include <stdio.h>
void main()
{
    int myarray[5];

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &myarray[i]);
    }

    printf("The numbers in reverse order are: ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", myarray[i]);
    }

    getch();
}