#include <conio.h>
#include <stdio.h>
void main()
{
    int u = 20;

    do
    {
        if (u % 2 == 0)
        {
            printf("%d ", u);
        }
        u++;
    } while (u <= 80);
    getch();
}