#include <conio.h>
#include <stdio.h>

typedef struct student
{
    char name[100];
    int rollNumber;
    float age;
} st;

void main()
{
    st kunal;

    printf("Enter your name : ");
    scanf("%s", &kunal.name);

    printf("Enter your roll number : ");
    scanf("%d", &kunal.rollNumber);

    printf("Enter your Agr : ");
    scanf("%f", &kunal.age);

    printf("\n\nYou Entered \nName : ");
    puts(kunal.name);

    printf("Roll Number : %d\nAge : %0.2f", kunal.rollNumber, kunal.age);

    getch();
}