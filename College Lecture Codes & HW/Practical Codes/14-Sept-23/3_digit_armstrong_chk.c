// accept 3 digit number from user and check whether it is armstrong or not
#include <conio.h>
#include <stdio.h>
void main()
{
    int u, c = 0, ans = 0, temp;
    printf("Enter a Number = ");
    scanf("%d", &u);

    temp = u;

    for (c = 0; c < 3; c++)
    {
        ans = ans + (u % 10) * (u % 10) * (u % 10);
        u = u / 10;
    }

    if (temp == ans)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    getch();
}