#include <conio.h>
#include <stdio.h>
void main()
{
    float avg;
    int sum = 0, u, c = 0;
    printf("Enter a Number = ");
    scanf("%d", &u);

    while (u != 99)
    {
        sum = sum + u;
        c++;
        printf("Enter a Number = ");
        scanf("%d", &u);
    }

    avg = (float)sum / c;
    printf("Sum = %d\nAverage = %0.2f", sum, avg);
    getch();
}
