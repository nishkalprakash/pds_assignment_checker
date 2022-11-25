/* A program to input and print three different types of datatypes */

#include <stdio.h>

int main()
{
	int i; char c; float fl; 	// declaration of 3 different datatypes.
	printf("Enter a postive integer, a character and a floating point number successively:");
	scanf("%d%c%f", &i, &c, &fl);
	
	printf("Integer is: %d\n", i);
	printf("Character is: %c\n", c);
	printf("Character in integer: %d\n", c);
	printf("Floating point number is: %f\n", fl);
	
	return 0;
}
