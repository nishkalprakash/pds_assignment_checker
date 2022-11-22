#include <stdio.h>

int i; //declaring variables
char c;
double d;

int main()
{
	scanf("%d %c %lf",&i,&c,&d); //taking input
	printf("%2d %c %.3e",i,c,d); //printing values
	return 0;
	
}
