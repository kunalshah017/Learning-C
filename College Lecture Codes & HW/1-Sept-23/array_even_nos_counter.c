#include <stdio.h>
#include <conio.h>

void main()
{
    int myarray[10], evencount = 0;

    for (int c = 0; c < 10; c++)
    {
        printf("Enter 10 Values for Array :");
        scanf("%d", &myarray[c]);
    }

    printf("\nYour Array : ");
    for (int c = 0; c < 10; c++)
    {
        printf("%d ", myarray[c]);
    }

    printf("\nEven Numbers : ");
    for (int c = 0; c < 10; c++)
    {
        if (myarray[c] % 2 == 0)
        {
            printf("%d ", myarray[c]);
            evencount++;
        }
    }

    printf("\nTotal Even Number = %d", evencount);

    getch();
}