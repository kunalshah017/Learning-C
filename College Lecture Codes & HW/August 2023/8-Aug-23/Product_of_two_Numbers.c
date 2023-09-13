// note this example takes input from user if you want you can predefine values for variables too

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