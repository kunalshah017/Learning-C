#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter a number = ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("number is even") : printf("number is odd");
    getch();
}