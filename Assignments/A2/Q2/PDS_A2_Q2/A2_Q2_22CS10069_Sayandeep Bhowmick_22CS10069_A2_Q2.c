/*Taking an integer, a character and a long floating value as input and printing the same*/
#include <stdio.h>
int main()
{
	int i;		//Inputs an integer
	char c;		//Inputs a character
	double f;	//Inputs a long floating value
	scanf("%d %c %lf",&i,&c,&f);
	printf("The integer,character and large floating numbers are %2d,%d,%.3e respectively",i,c,f);
	return 0;
}
