#include <conio.h>
#include <stdio.h>
void main()
{
    int i = 10;
    while (i > 0)
    {
        if (i == 7)
        {
            i--;
            continue;
        }
        printf("%d\n", i);
        i--;
    }

    getch();
}