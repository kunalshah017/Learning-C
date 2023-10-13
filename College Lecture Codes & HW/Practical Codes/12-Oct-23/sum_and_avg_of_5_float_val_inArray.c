#include <conio.h>
#include <stdio.h>

void main()
{
    float myarray[5], sum = 0, avg = 0;
    int c;

    printf("Enter 5 float values : ");
    for (c = 0; c < 5; c++)
    {
        scanf("%f", &myarray[c]);
        sum = sum + myarray[c];

        if (c == 4)
        {
            avg = sum / 5;
        }
    }

    printf("Sum = %0.2f\nAvg = %0.2f", sum, avg);

    getch();
}