#include <conio.h>
#include <stdio.h>
void main()
{
    int u, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &u);
        if (u < 0)
        {
            continue;
        }
        sum = sum + u;
    }

    printf("Sum of positive numbers is %d", sum);
    getch();
}
