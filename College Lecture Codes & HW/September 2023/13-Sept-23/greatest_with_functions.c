#include <conio.h>
#include <stdio.h>

int chk();

int a, b;

void main()
{
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int k = chk();

    printf("Greatest Number is = %d", k);

    getch();
}

int chk()
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}