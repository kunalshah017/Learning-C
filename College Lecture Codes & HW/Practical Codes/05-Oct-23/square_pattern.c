#include <conio.h>
#include <stdio.h>
void main()
{
    int length, breadth;

    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d", &length, &breadth);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < breadth; j++)
        {
            if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    getch();
}