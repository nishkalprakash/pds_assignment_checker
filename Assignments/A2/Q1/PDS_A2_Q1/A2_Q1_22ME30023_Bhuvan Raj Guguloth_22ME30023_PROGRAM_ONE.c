/* This program reads two characters using scanf and print the characters on the screen. */

#include <stdio.h>

int main()
{
    char c1,c2;  // Two variables to store any character 
    scanf("%c%c", &c1, &c2);  // Read any two characters
    printf("%c%c", c1, c2);   // Print the characters
    return 0;
}
