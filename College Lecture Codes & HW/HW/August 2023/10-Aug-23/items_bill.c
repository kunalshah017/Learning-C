#include <stdio.h>
#include <conio.h>

void main()
{
    // clrscr();
    system("cls");
    int q1, r1, q2, r2;

    printf("Enter quantitiy and rate of item 1 - ");
    scanf("%i %i", &q1, &r1);

    printf("Enter quantitiy and rate of item 2 - ");
    scanf("%i %i", &q2, &r2);

    // clrscr();
    system("cls");

    printf("item\tQuantity\trate\ttotal");
    printf("\nitem1\t%i\t\t%i\t%i", q1, r1, q1 * r1);
    printf("\nitem2\t%i\t\t%i\t%i", q2, r2, q2 * r2);
    printf("\n--------------------------------------");
    printf("\n\t\t  Grand Total = %i", (q1 * r1) + (q2 * r2));
    printf("\n--------------------------------------");

    getch();
}
