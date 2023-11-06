#include <conio.h>
#include <stdio.h>

void fibo(int u)
{
    int i, a = 0, b = 1, c;

    printf("Fibonacci series= %d %d ", a, b);

    for (i = 1; i <= u - 2; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}
void main()
{
    int u;

    printf("Enter the number of Elements you want: ");
    scanf("%d", &u);

    fibo(u);

    getch();
}