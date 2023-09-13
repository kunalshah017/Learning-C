#include <stdio.h>
#include <conio.h>

int u;
int chk();

void main()
{
    printf("Enter a Number = ");
    scanf("%d", &u);

    int out = chk();

    if (out == 1)
    {
        printf("Number is Even");
    }
    else if (out == 0)
    {
        printf("Number is Odd");
    }
}

int chk()
{
    int temp;
    (u % 2 == 0) ? (temp = 1) : (temp = 0);
    return temp;
}