#include <conio.h>
#include <stdio.h>
void main()
{
    int matrix1[2][2], matrix2[2][2];

    printf("Enter the elements of the 2D matrix 1\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of the 2D matrix 2\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The addition of the 2D matrix is\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
    getch();
}
