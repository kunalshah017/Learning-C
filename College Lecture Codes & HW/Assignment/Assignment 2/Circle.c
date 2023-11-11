#include <stdio.h>
#include <conio.h>

struct Circle
{
    float radius;
};

float area(struct Circle circle)
{
    return 3.14 * circle.radius * circle.radius;
}

float perimeter(struct Circle circle)
{
    return 2 * 3.14 * circle.radius;
}

int main()
{
    struct Circle circle;

    printf("Enter radius: ");
    scanf("%f", &circle.radius);

    printf("Area: %0.2f", area(circle));
    printf("\nPerimeter: %0.2f", perimeter(circle));

    getch();

    return 0;
}