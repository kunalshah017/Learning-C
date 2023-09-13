#include <conio.h>
#include <stdio.h>

void fact(int a);

void main ()
{
    int u;
    printf("Enter a Number : ");
    scanf("%d",&u);
    
    printf("Factorial of %d = ",u);
    fact(u);
    
    getch();
}

void fact(int a)
{
    for(int c=a-1;c>0;c--)
    {
        a=a*c;
    }
    
    printf("%d",a);
}