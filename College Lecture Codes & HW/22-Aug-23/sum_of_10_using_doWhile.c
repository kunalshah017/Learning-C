#include <conio.h>
#include <stdio.h>
void main()
{
    int i = 1, sum = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i <= 10);
    printf("Sum of first 10 natural no is = %d", sum);
    getch();
}