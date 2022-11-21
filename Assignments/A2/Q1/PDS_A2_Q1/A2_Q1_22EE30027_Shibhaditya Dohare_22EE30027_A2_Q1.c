#include<stdio.h>

int main()
{
	printf("This program reads any two characters typed on the keyboard \n"); //This program reads two characters typed on the keyboard.
	char c1, c2; // variables to store two characters
	scanf("%c %c", &c1, &c2); // to read two variables
	printf("%c%c", c1, c2);  // to print the characters
	return 0;
}
