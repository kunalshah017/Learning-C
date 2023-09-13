#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0;

    while (a <= 10)
    {
        if (a % 2 == 0)
        {
            printf("%d\n", a);
        }
        a++;
    }
    getch();
}