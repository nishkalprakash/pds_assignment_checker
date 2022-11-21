/* This program declares three variables to store integer, character and float type data */
#include<stdio.h>
int main()
{
	int x; 		// One variable to store integer type data
	char y;		// One variable to store character type data
	float z;	// One variable to store float type data
	scanf("%d %c %f",&x,&y,&z);	//Read three characters
	printf("%d %c %f",x,y,z);	//Print the characters
	return 0;
}

