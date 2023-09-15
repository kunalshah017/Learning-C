#include <conio.h>
#include <stdio.h>
void main()
{
    int u, chk = 0;
    printf("Enter a Number = ");
    scanf("%d", &u);

    int c = 2;
    while (c < u)
    {
        if (u % c == 0)
        {
            printf("Not Prime");
            chk = 1;
            break;
        }
        c++;
    }
    if (chk == 0)
    {
        printf("Prime");
    }

    getch();
}