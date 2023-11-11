#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char user_input[100];

    printf("Enter a long string: ");
    gets(user_input);

    int length = strlen(user_input);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", user_input[i]);
    }

    getch();

    return 0;
}