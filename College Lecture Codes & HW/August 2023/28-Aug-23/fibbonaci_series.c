#include <conio.h>
#include <stdio.h>
void main()
{
    int i = 1, u;

    printf("Till where do you want to print the series? : ");
    scanf("%d", &u);

    for (int c = 0; c <= u; c++)
    {
        if (c == 0)
        {
            i = i + c + 1;
            printf("%d + %d = %d\n", c + 1, i - 1, i);

            continue;
        }
        i = i + c;
        printf("%d + %d = %d\n", c, i - c, i);
    }

    getch();
}