#include <conio.h>
#include <stdio.h>

void main()
{
    // Uncomment the Appropriate one

    // while compiling on windows we use this system("cls")
    // system("cls");

    // for TurboCpp compiler we will use
    //  clrscr();

    int a, square, cube;

    printf("Enter a number : ");
    scanf("%i", &a);

    square = a * a;

    // cube = square * a;
    // or

    cube = a * a * a;

    printf("Square of the number is = %i\n", square);
    printf("Cube of the number is = %i", cube);

    getch();
}