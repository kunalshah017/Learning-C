// Source code for Assignment Question 7

#include <stdio.h>
#include <conio.h>

void main()
{

    float x1, x2, y1, y2;

    printf("Enter X and Y co-ordinates for point 1");
    printf("\nX1 = ");
    scanf("%f", &x1);
    printf("Y1 = ");
    scanf("%f", &y1);

    printf("\nEnter X and Y co-ordinates for point 2");
    printf("\nX2 = ");
    scanf("%f", &x2);
    printf("Y2 = ");
    scanf("%f", &y2);

    float sumx = (x2 - x1) * (x2 - x1);
    float sumy = (y2 - y1) * (y2 - y1);

    float distance = sumx + sumy;

    printf("\n\nDistance between two points is = √%0.2f", distance);

    getch();
}