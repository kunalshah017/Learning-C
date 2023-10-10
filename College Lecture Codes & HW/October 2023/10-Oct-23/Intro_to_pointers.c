#include <conio.h>
#include <stdio.h>
void main()
{

    int a, *P;

    a = 10;
    P = &a;

    printf("a=%d\n", a);
    printf("&a=%p\n", &a);
    printf("P=%p\n", P);
    printf("&P=%p\n", &P);
    printf("*P=%d\n", *P);

    getch();
}
