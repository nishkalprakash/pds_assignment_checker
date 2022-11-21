/* This program reads two characters using scanf and print the characters on the screen. */
#include <stdio.h>
int main()
{
    char c1,c2;  //Two variables declared to store any character
    scanf("%c%c",&c1,&c2); //Read any two characters given by the user 
    printf("%c%c",c1,c2);  //print the characters that are given as input 
    return 0;
}
