#include <conio.h>
#include <stdio.h>

int main()
{
    int n, c, input;

    printf("Enter a number = ");
    scanf("%d", &n);

    input = n;

    c = n - 1;

    printf("%d", n);
    while (c > 0)
    {
        n = n * c;
        printf(" x %d", c);
        c--;
    }

    printf(" = %d", n);
    printf("\nFactorial of %d is %d", input, n);

    getch();
}
