#include <conio.h>
#include <stdio.h>
void main()
{
    int n, c = 4;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        if (c == 4)
        {
            printf("fourth digit is = %d\n", n % 10);
            n = n / 10;
        }
        else if (c == 1)
        {
            printf("first digit is = %d\n", n % 10);
            n = n / 10;
        }
        else
        {
            n = n / 10;
        }
        c--;
    }
    getch();
}
