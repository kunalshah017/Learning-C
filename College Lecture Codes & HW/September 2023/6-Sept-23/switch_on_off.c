#include <conio.h>
#include <stdio.h>

void main()
{
    char ch;
    printf("Enter a character : ");
    ch = getchar();

    if (ch == 'O' || ch == 'o')
    {
        printf("Switch is on !");
    }
    else
    {
        printf("Switch is off");
    }
    getch();
}