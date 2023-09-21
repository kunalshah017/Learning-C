// code to print following pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
#include <conio.h>

void main()
{
    for (int i = 1, k = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    getch();
}
