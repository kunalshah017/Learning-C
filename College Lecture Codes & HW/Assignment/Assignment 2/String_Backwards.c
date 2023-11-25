#include <conio.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char user_input[100];

    printf("Enter a Long String : ");
    gets(user_input);

    int lb = strlen(user_input) - 1, ub = strlen(user_input) - 1;

    printf("Reversed String (words): \n");

    while (lb <= ub)
    {
        if (lb == 0)
        {
            for (int c = lb; c <= ub; c++)
            {
                printf("%c", user_input[c]);
            }
            break;
        }

        if (user_input[lb] == ' ')
        {
            for (int c = lb + 1; c <= ub; c++)
            {
                printf("%c", user_input[c]);
            }
            printf(" ");
            ub = lb - 1;
        }
        lb--;
    }

    getch();
}
