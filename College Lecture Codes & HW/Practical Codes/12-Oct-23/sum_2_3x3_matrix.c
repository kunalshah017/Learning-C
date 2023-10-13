#include <conio.h>
#include <stdio.h>

void main()
{
    int myarray1[3][3], myarray2[3][3], c1, c2;

    printf("Enter the Matrix 1 : ");
    for (c1 = 0; c1 < 3; c1++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            scanf("%d", &myarray1[c1][c2]);
        }
        printf("\n");
    }

    printf("Enter the Matrix 2 : ");
    for (c1 = 0; c1 < 3; c1++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            scanf("%d", &myarray2[c1][c2]);
        }
        printf("\n");
    }

    for (c1 = 0; c1 < 3; c1++)
    {
        for (c2 = 0; c2 < 3; c2++)
        {
            printf(" %d", myarray1[c1][c2]);
        }

        if (c1 == 1)
        {
            printf("\t+\t");
        }
        else
        {
            printf("\t\t");
        }

        for (c2 = 0; c2 < 3; c2++)
        {
            printf(" %d", myarray2[c1][c2]);
        }
        if (c1 == 1)
        {
            printf("\t=\t");
        }
        else
        {
            printf("\t\t");
        }

        for (c2 = 0; c2 < 3; c2++)
        {
            printf(" %d", myarray1[c1][c2] + myarray2[c1][c2]);
        }
        printf("\n");
    }

    getch();
}