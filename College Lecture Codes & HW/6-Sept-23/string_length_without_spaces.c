#include <conio.h>
#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int length = 0;
    printf("Enter a String : ");
    gets(str);

    for (int c = strlen(str) - 1; c >= 0; c--)
    {
        if (str[c] != ' ')
        {
            length++;
        }
    }

    printf("Length of String is = %d", length);
    getch();
}