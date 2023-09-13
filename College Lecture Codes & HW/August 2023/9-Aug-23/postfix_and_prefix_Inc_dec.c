#include <stdio.h>
#include <conio.h>

void main()
{
    int a = 10, b = 10;

    printf("This is a = %d", a);
    printf("\nThis is b = %d", b);

    printf("\n\nThis is a++ = %d", a++);
    a = 10;
    printf("\nThis is ++a = %d", ++a);

    printf("\nThis is b-- = %d", b--);
    b = 10;
    printf("\nThis is --b = %d", --b);

    getch();
}