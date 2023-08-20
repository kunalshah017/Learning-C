#include <conio.h>
#include <stdio.h>

int main()
{
    int n = 20;

    for (n = 20; n <= 100; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
    }
    getch();
}