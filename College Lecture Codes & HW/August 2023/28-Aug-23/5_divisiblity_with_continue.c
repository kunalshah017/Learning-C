#include <conio.h>
#include <stdio.h>
void main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d: Pass\n", i);
            continue;
        }
        printf("%d\n", i);
    }
}