#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;

    printf("Enter a Character : ");

    while (ch != 'x' || ch != 'x')
    {
        ch = getchar();
        putchar(ch);
    }

    getch();
}