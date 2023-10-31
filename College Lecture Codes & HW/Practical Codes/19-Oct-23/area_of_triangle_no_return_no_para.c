#include <conio.h>
#include <stdio.h>

int area_of_triangle()
{
    int b, h;
    float area;

    printf("Enter the base and height of the triangle: ");
    scanf("%d%d", &b, &h);

    area = 0.5 * b * h;

    printf("Area of the triangle= %0.2f", area);
}

void main()
{
    area_of_triangle();
    getch();
}
