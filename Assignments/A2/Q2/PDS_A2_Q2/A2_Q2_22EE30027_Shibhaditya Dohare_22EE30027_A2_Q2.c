#include<stdio.h>

int main()
{
	int i;
	char c;
	double f;
	scanf("%2i %c %lf", &i, &c, &f);
	printf("The integer is %2i \n", i);
	printf("The character is %c \n", c);
	printf("The floating point value is %e \n", f);
	return 0;
}
