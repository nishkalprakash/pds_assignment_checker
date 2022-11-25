#include <stdio.h>
	
	int num;	//global declaration of variables
	char ch;
	float dec;

int main()
{
	scanf("%2d %c %f",&num, &ch, &dec);	//reads the characters 
	printf("%2d %c %f",num, ch, dec);	//prints the entered characters
	return 0;
}

	
