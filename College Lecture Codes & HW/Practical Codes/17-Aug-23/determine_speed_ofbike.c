#include <conio.h>
#include <stdio.h>
void main()
{
    float distance, time, speed;
    printf("Enter the distance traveled by the bike (in km): ");
    scanf("%f", &distance);

    printf("Enter the time taken by the bike (in hours): ");
    scanf("%f", &time);

    speed = distance / time;

    printf("The speed of the bike is %.2f km/h\n", speed);

    getch();
}