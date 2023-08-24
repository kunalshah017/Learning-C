#include <conio.h>
#include <stdio.h>

int main()
{
    int n, sum = 0, avg;

    for (int c = 1; c <= 5; c++)
    {
        printf("Enter a number = ");
        scanf("%d", &n);

        sum = sum + n;
    }

    avg = sum / 5;

    printf("Sum is = %d", sum);
    printf("\nAvg is = %d", avg);

    getch();
}