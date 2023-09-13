#include <conio.h>
#include <stdio.h>
void main()
{
    int length, breadth;

    printf("Enter length :");
    scanf("%d", &length);

    printf("Enter breadth :");
    scanf("%d", &breadth);

    int l, b;

    for (b = 1; b <= breadth; b++)
    {
        for (l = 1; l <= length; l++)
        {
            if (b == 1 || b == breadth || l == 1 || l == length)
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
}