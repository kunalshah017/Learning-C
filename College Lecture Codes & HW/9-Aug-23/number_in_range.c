#include <stdio.h>
#include <conio.h>

void main()
{

    int n;
    printf("Enter a Number - ");
    scanf("%d", &n);

    if (n > 1 && n < 10)
    {
        printf("Between 1 to 10");
    }
    else
    {
        printf("not in range");
    }

    getch();
}