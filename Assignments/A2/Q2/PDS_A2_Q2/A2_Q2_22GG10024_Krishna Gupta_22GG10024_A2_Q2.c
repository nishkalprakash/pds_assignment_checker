/* This program reads two characters using scanf and print them on screen */
#include <stdio.h>

int main() // main function
{
     int a;   // declaration for integer 
     char c;  // declaration for character
     float f;  // declaration for floating point
  scanf("%d %c %f",&a,&c,&f);// taking the input from the user
    printf("%d %c %f",a,c,f); // printing 
     return 0;
}
