#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[100];

    printf("Enter a String : ");
    gets(str);

    int length = strlen(str), count = 0;

    for (int c = 0; c <= length; c++)
    {
        if (str[c] == 'a' || str[c] == 'A')
        {
            count++;
        }
        else if (str[c] == 'e' || str[c] == 'E')
        {
            count++;
        }
        else if (str[c] == 'i' || str[c] == 'I')
        {
            count++;
        }
        else if (str[c] == 'o' || str[c] == 'O')
        {
            count++;
        }
        else if (str[c] == 'u' || str[c] == 'U')
        {
            count++;
        }
        else
        {
            continue;
        }
    }

    printf("no of vowels = %d", count);
}