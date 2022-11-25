/* displays 3 inputs */
#include <stdio.h>
int main()
{
	int a;
	char ch;
	float d;
	printf("enter a positive integer and character");
	scanf("%d %c",&a,&ch);	
	printf("enter a large floating point number ");
	scanf("%e",&d);
	printf("the integer is: %2d \n the character is: %d \n the large floating point number is: 		%e",a,ch,d);
}	//end of main function  

