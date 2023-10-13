#include <conio.h>
#include <stdio.h>

void main()
{
    int myarray[3][3], c1, c2;

    printf("Enter a 3x3 matrix :\n");
    for (c1 = 0; c1 < 3; c1++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            scanf("%d", &myarray[c1][c2]);
        }
        printf("\n");
    }

    printf("Transpose of Matrix = \n");
    for (c1 = 0; c1 < 3; c1++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            printf(" %d", myarray[c2][c1]);
        }
        printf("\n");
    }

    getch();
}