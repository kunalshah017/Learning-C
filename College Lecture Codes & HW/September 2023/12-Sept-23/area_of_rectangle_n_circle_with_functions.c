#include <stdio.h>
#include <conio.h>

void circle();
void rectangle();

int l, b, r;

void main()
{

    printf("Enter length and breadth of rectangle = ");
    scanf("%d %d", &l, &b);

    printf("Enter radius of circle = ");
    scanf("%d", &r);

    rectangle();
    printf("\n");
    circle();

    getch();
}

void circle()
{
    float area;
    area = 3.14 * r * r;
    printf("Area of circle = %0.2f", area);
}

void rectangle()
{
    int area;
    area = l * b;
    printf("Area of rectangle = %d", area);
}