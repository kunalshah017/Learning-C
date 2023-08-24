#include <stdio.h>
#include <conio.h>

void main()
{
    char gender;

    printf("Enter your gender (M/F): ");
    scanf("%c", &gender);

    (gender == 'M' || gender == 'm') ? printf("Hello, sir!") : (gender == 'F' || gender == 'f') ? printf("Hello, madam!")
                                                                                                : printf("Invalid input.");

    getch();
}
