#include <stdio.h>
#include <conio.h>

void main()
{
    char a;

    printf("Enter a alphabet :- ");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
        printf("it is a vowel ");
        break;
    case 'e':
        printf("it is a vowel ");
        break;
    case 'i':
        printf("it is a vowel ");
        break;
    case 'o':
        printf("it is a vowel ");
        break;
    case 'u':
        printf("it is a vowel ");
        break;
    default:
        printf("it is a consonant");
    }
    getch();
}