#include <conio.h>
#include <stdio.h>

void main()
{
    int array[3][3] = {1, 0, 0, 0, 1, 0, 0, 0, 1};

    printf("3D Identity Array is = \n");
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("  %d  ", array[r][c]);
        }
        printf("\n");
    }

    getch();
}