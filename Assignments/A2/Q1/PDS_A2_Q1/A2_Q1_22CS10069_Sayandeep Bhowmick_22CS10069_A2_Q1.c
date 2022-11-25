/* This program reads two characters using scanf and prints the characters on the screen */

#include <stdio.h>
int main()
{
	char c1, c2;	//Two variables to store any character
	scanf("%c %c", &c1, &c2);	//Read any two characters
	printf("%c \n%c \n", c1, c2);		//Prints the characters
	return 0;
}
