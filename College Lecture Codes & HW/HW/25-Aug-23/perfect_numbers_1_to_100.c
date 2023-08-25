#include <conio.h>
#include <stdio.h>
void main()
{
    int n = 1, sum = 0;

    printf("Perfect numbers from 1 to 100 are:\n");

    for (n = 1; n <= 100; n++)
    {
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == n)
        {
            printf("%d\n", n);
        }
        sum = 0;
    }
}