#include <stdio.h> 
#include <conio.h> 
  
 float square(float s); 
  
 void main() 
 { 
     float u; 
  
     printf("Enter a Number = "); 
     scanf("%f", &u); 
  
     float ans = square(u); 
  
     printf("Square of %0.2f is = %0.2f", u, ans); 
 } 
  
 float square(float s) 
 { 
     return s * s; 
 }
