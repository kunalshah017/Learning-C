#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int correct_answer = rand() % 100 + 1, c = 3;

    int user_input;

    while (c > 0)
    {

        printf("\n\nEnter a number between 1 to 100: ");
        scanf("%d", &user_input);

        if (user_input == correct_answer)
        {
            printf("Correct!");
            break;
        }
        else if (user_input > correct_answer)
        {
            printf("Too high!\nTry Again\n%d Chances Left", c - 1);
        }
        else
        {
            printf("Too low!\nTry Again\n%d Chances Left", c - 1);
        }
        c--;
    }

    printf("\nCorrect answer was %d", correct_answer);
    getch();

    return 0;
}