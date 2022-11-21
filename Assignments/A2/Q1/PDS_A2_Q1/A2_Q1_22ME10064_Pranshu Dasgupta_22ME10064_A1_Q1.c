/*This program reads two characters using scanf and prints the characters on the screen. */

#include <stdio.h>

int main()
{
	char c1, c2;	// declaring two variables with datatype char
	scanf("%c%c", &c1, &c2);	// getting 2 characters input by the user
	printf("%c%c\n", c1, c2); 	// printing the characters
	return 0;
}
