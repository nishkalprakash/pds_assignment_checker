#include <stdio.h>

int i;
char c;
double floating; // using double for large floating point entry

int main () {

	scanf("%d %c %lf", &i, &c, &floating); // taking corresponding input
	printf("%2d %d %.3e", i, c, floating); // output in specified format
	return 0;

}
