#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, c = 0;

    while (c <= 10)
    {
        i = i + c;
        c++;
    }
    printf("Sum is = %d", i);
    getch();
}