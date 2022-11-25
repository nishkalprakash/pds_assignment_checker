#include <stdio.h>

int main()
{

	int x;					// Declaring Varibales
	char c;
	double y;

	scanf("%d %c %lf", &x, &c, &y);		// Asking for values from user

	printf("%2d\n%d\n%lf", x, c, y);		// Printing values of the variables

	return 0;

}