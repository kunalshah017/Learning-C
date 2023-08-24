#include <stdio.h>
#include <conio.h>

void main()
{
    float height1, height2;

    printf("Enter the height of the first person: ");
    scanf("%f", &height1);

    printf("Enter the height of the second person: ");
    scanf("%f", &height2);

    if (height1 > height2)
        printf("The first person is taller.");
    else if (height2 > height1)
        printf("The second person is taller.");
    else
        printf("Both people are of equal height.");

    getch();
}
