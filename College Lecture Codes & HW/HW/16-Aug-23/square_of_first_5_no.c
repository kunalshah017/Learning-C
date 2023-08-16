#include <conio.h>
#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("Square of %d is = %d\n", i, i * i);
        i++;
    }
    getch();
}