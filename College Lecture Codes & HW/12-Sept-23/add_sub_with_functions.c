#include <stdio.h>
#include <conio.h>

int k, s;
char c;
// function declaration
void sum();
void sub();

void main()
{

    printf("Enter the Expression : ");
    scanf("%d %c %d", &k, &c, &s);

    if (c == '+')
    {
        // Function Call
        sum();
    }

    if (c == '-')
    {
        // Function Call
        sub();
    }

    getch();
}

// Function Definition
void sum()
{
    printf("Answer is = %d", k + s);
}

void sub()
{
    printf("Answer is = %d", k - s);
}