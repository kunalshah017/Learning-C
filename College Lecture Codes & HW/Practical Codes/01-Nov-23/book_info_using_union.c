//  create union to accept info about book name, author name and
// price of the book, and display the same.

#include <stdio.h>
#include <conio.h>

union Book
{
    char name[50];
    char author[50];
    int price;
} b;

void main()
{
    printf("\n\nEnter book name: ");
    scanf("%s", &b.name);
    printf("\n\nBook name: %s", b.name);

    printf("\n\nEnter author name: ");
    scanf("%s", &b.author);
    printf("\nAuthor name: %s", b.author);

    printf("\n\nEnter price: ");
    scanf("%d", &b.price);
    printf("\nPrice: %d", b.price);

    getch();
}