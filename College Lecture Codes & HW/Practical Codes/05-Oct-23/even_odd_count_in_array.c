#include <conio.h>
#include <stdio.h>
void main()
{
    int myarray[10], even_count = 0, odd_count = 0;

    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &myarray[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (myarray[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("The number of even numbers is = %d\n", even_count);
    printf("The number of odd numbers is = %d\n", odd_count);

    getch();
}