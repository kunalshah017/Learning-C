#include <conio.h>
#include <stdio.h>
void main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    getch();
}
