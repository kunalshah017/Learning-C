#include <stdio.h>
#include <conio.h>

void main()
{
    int u;

    printf("Enter a Number = ");
    scanf("%d", &u);

    if (u % 10 == 0)
    {
        printf("%d is divisible by 10", u);
    }
    else
    {
        printf("%d is not divisible by 10", u);
    }

    getch();
}
