#include <stdio.h>
#include <conio.h>

void main()
{

    int n = 1, sum = 0;

    while (n != 0)
    {
        // clrscr();
        system("cls");
        printf("Enter a Number or enter 0 to stop : ");
        scanf("%d", &n);

        sum = sum + n;
    }

    printf("Total Sum is = %d", sum);

    getch();
}
