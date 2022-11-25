#include <stdio.h>
int a;	//Declaring Variables
char b;
float c;
int main()
{
	printf("Enter an integer, a character and a floating value\n"); //Instructions for he user.
	scanf("%d %c %f", &a,&b,&c); //Reading the values
	
	printf("The integer value is %d \n",a);	//Print the integer
	printf("The character value is %c \n",b);	//Print the Character
	printf("The floating point value is %e \n",c);	//Print the Floating point value
	return 0;
}

	
