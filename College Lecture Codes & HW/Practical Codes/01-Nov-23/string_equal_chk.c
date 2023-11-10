// accept two strings from user and check whether both are equal
// or not using strcmp

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s1[50], s2[50];
    printf("\n\nEnter string 1: ");
    scanf("%s", &s1);
    printf("\n\nEnter string 2: ");
    scanf("%s", &s2);
    if (strcmp(s1, s2) == 0)
        printf("\n\nStrings are equal");
    else
        printf("\n\nStrings are not equal");
    getch();
}