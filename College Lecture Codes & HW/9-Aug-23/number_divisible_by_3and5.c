#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    printf("Enter a Number - ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("The number is divisible by 3 or 5");
    }
    else
    {
        printf("condition not satisfied");
    }

    getch();
}