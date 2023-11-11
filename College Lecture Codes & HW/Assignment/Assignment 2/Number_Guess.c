#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int correct_answer = rand() % 100 + 1;

    int user_input;

    printf("Enter a number between 1 to 100: ");
    scanf("%d", &user_input);

    if (user_input == correct_answer)
    {
        printf("Correct!");
    }
    else if (user_input > correct_answer)
    {
        printf("Too high!");
    }
    else
    {
        printf("Too low!");
    }

    printf("\nCorrect answer was %d", correct_answer);
    getch();

    return 0;
}