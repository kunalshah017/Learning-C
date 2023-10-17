#include <conio.h>
#include <stdio.h>

float calc_sum(float num[]);

void main()
{
    float result, num[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    result = calc_sum(num);

    printf("Sum of Numbers is = %0.2f", result);

    getch();
}

float calc_sum(float num[])
{
    float sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }

    return sum;
}