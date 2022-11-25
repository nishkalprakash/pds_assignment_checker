#include <stdio.h>

	int x;
	char y;
	float z;

int main()
{
	printf("Enter a positive integer , any character , and a real value ");    //Giving the inputs  
	scanf("%d%c%f", &x , &y , &z );
	printf("Now printing the values you have entered.....");    //Print the characters
	printf("x = %d   y = %c  and z = %f \n", x, y, z);
	return 0;
}
