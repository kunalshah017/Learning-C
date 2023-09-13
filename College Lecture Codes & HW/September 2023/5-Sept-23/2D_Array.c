#include <conio.h>
#include <stdio.h>

void main()
{
    int array[2][2] = {1, 2, 3, 4};

    printf("2D Array is = \n");
    for (int r = 0; r < 2; r++)
    {
        for (int c = 0; c < 2; c++)
        {

            printf("%d ", array[r][c]);
        }
        printf("\n");
    }

    getch();
}