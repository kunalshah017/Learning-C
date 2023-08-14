#include <conio.h>
#include <stdio.h>
void main()
{
    int pds, epid, dw;

    printf("Enter your employee ID: ");
    scanf("%d", &epid);

    printf("Enter your pay day salary: ");
    scanf("%d", &pds);

    printf("Enter your days of work: ");
    scanf("%d", &dw);

    printf("Your salary is = %d", pds * dw);
    getch();
}