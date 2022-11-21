/*Program to declare three variables in global section*/
#include <stdio.h>

int a; char b; float c;

int main()
{
	printf("Enter any 3 characters:\n");
	scanf("%2d\n%c %f", &a, &b, &c);
	printf("Integer entered: %2d\nCharacter entered: %d\nDecimal value: %f",a,b,c);
	return 0;
}
