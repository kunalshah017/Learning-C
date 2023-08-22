#include <conio.h>
#include <stdio.h>
void main()
{
    float length, width, side;
    printf("Enter the length of the rectangle : ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle : ");
    scanf("%f", &width);

    printf("Enter the side of the square : ");
    scanf("%f", &side);

    printf("Area of the rectangle : %f\n", length * width);
    printf("Area of the square : %f\n", side * side);
    getch();
}