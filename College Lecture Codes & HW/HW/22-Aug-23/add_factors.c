#include <conio.h>
#include <stdio.h>
void main()
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors are:\n");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }

    printf("\nSum of factors = % d ", sum);

    getch();
}