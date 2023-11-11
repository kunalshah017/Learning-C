#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char username[100];
    char password[100];

    printf("--- SignUP ---");

    printf("\n\nEnter username: ");
    gets(username);

    printf("Enter password: ");
    gets(password);

    int attempts = 3;

    printf("\n\n--- Login ---\n");

    char user_input_username[100];

    printf("Enter username: ");
    gets(user_input_username);

    if (strcmp(user_input_username, username) == 0)
    {
        while (attempts > 0)
        {
            char user_input_password[100];

            printf("Enter password: ");
            gets(user_input_password);

            if (strcmp(user_input_password, password) == 0)
            {
                printf("Congratulations, you can login.");
                break;
            }
            else
            {
                printf("Incorrect password.");
                printf("\n%d attempts left.\n\n", attempts - 1);
            }

            attempts--;
        }
    }
    else
    {
        printf("Incorrect username.");
    }

    getch();
}