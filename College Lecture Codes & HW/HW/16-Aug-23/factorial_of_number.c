#include <conio.h>
#include <stdio.h>

int main () {
     int n,c ;
     
     printf("Enter a number = ");
     scanf("%d",&n);
     
     c=n-1;
     
     printf("%d",n);
     while (c>0)
     {
         n = n * c;
         printf(" x %d",c);
         c--;
     }
     
     printf(" = %d",n);
     
     getch();
}
