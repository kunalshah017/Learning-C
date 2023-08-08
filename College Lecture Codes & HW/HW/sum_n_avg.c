#include <conio.h>
#include <stdio.h>
void main()
{
    int sum, avg;
    int a = 10, b = 20, c = 30;
    sum = a + b + c;
    avg = sum / 3;

    printf("sum = %d\n", sum);
    printf("avg = %d\n", avg);

    getch();
}