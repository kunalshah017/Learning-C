#include <stdio.h>
#include <conio.h>

int main()
{
    int n, c = 1;

    printf("enter a number = ");
    scanf("%d", &n);

    while (c <= 10)
    {
        printf("%d X %d = %d \n", n, c, n * c);
        c++;
    }

    getch();
}