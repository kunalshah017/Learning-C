#include <stdio.h>
#include <conio.h>

void main()
{
    // Uncomment the Appropriate one

    // while compiling on windows we use this system("cls")
    // system("cls");

    // for TurboCpp compiler we will use
    //  clrscr();

    int a = 10, b = 20, sum;
    sum = a + b;
    printf("a is = %i\n", a);
    printf("b is = %i\n", b);
    printf("sum is = %i", sum);
    getch();
}