#include <conio.h>
#include <stdio.h>

void main()
{
    int myarray[10], min, max, c;

    printf("Enter 10 Values of array : ");
    for (c = 0; c < 10; c++)
    {
        scanf("%d", &myarray[c]);
        if (c == 0)
        {
            min = myarray[c];
            max = myarray[c];
        }
        else
        {
            if (myarray[c] > max)
            {
                max = myarray[c];
            }
            if (myarray[c] < min)
            {
                min = myarray[c];
            }
        }
    }

    printf("Min Value = %d\nMax Value = %d", min, max);
    getch();
}