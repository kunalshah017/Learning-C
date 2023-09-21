// simple code to accept number from user and check wheter it is krishnamurty number or not
// Krishnamurty number is a number whose sum of factorial of digits is equal to the number itself

#include <stdio.h>
#include <conio.h>

void main()
{
    int user_num, temp, rem, fact, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &user_num);

    temp = user_num;

    while (temp > 0)
    {
        rem = temp % 10;
        fact = 1;

        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == user_num)
    {
        printf("%d is a Krishnamurty number", user_num);
    }
    else
    {
        printf("%d is not a Krishnamurty number", user_num);
    }

    getch();
}