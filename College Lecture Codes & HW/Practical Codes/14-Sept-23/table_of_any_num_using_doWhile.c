#include <conio.h>
#include <stdio.h>
void main()
{
    int u, c = 1;
    printf("Enter a Number = ");
    scanf("%d", &u);

    do
    {
        printf("%d x %d = %d\n", u, c, u * c);
        c++;
    } while (c <= 10);

    getch();
}