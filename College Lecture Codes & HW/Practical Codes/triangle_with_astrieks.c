#include <conio.h>
#include <stdio.h>
void main()
{
    int blankspace, star;
    for (star = 1; star <= 5; star++)
    {
        for (blankspace = 1; blankspace <= 5 - star; blankspace++)
        {
            printf(" ");
        }
        for (blankspace = 1; blankspace <= star; blankspace++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
}