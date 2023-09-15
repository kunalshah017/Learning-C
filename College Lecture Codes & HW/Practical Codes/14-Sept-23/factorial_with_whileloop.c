#include <conio.h>
#include <stdio.h>
void main()
{
    int ans = 1, u;
    printf("Enter a Number = ");
    scanf("%d", &u);

    for (int c = u; c >= 1; c--)
    {
        ans = ans * c;
    }

    printf("%d! = %d", u, ans);
    getch();
}