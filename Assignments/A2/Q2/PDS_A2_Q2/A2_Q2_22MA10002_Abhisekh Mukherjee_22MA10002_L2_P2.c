#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	char b;
	float c;   // declaring a positive integer,a character and a floating number

	scanf("%2d %c %f",&a,&b,&c); // read the three values
	printf("the integer value is %2d\n",a); // print the integer
	printf("the character is %c\n",b); // print the character
	printf("the very large floating point number is %f\n",c); //print the floating number

	return 0;
}

