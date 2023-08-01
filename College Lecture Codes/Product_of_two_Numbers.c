#include <conio.h>
#include <stdio.h>

void main()
{
    // Uncomment the Appropriate one

    // while compiling on windows we use this system("cls")
    // system("cls");

    // for TurboCpp compiler we will use
    //  clrscr();

    int a, b, product;

    printf("Enter first number : ");
    scanf("%i", &a);
    printf("Enter second number : ");
    scanf("%i", &b);

    product = a * b;

    printf("Answer is = %i", product);

    getch();
}