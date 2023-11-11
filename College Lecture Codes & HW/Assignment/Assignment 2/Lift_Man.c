#include <stdio.h>
#include <conio.h>

int main()
{
    int current_floor = 0;

    while (1)
    {
        printf("Current floor: %d\n", current_floor);

        int user_input;

        printf("Enter floor to go to: ");
        scanf("%d", &user_input);

        if (user_input == -1)
        {
            break;
        }

        if (user_input < 0 || user_input > 5)
        {
            printf("Invalid floor.\n");
            continue;
        }

        if (user_input > current_floor)
        {
            printf("Going up...\n");
        }
        else if (user_input < current_floor)
        {
            printf("Going down...\n");
        }

        current_floor = user_input;
    }

    printf("Exiting Lift.\n");
    getch();

    return 0;
}