#include <conio.h>
#include <stdio.h>

void main()
{
    char str[100];
    printf("Enter a String : ");
    gets(str);

    printf("\nString Entered : ");
    puts(str);

    getch();
}