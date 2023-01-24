/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 9
	Description : Program to find area of axis parallel rectangle 
*/

#include <stdio.h>

struct rectangle
{
	float x_bot_left;
	float y_bot_left;

	float x_top_right;
	float y_top_right;
};

float area ( struct rectangle A)
{
	float area = (A.x_top_right - A.x_bot_left)*(A.y_top_right - A.y_bot_left);
	return area;
}

int main()
{
	struct rectangle A;
	
	printf("Enter coordinates of bottom left point: ");
	scanf("%f%f" , &A.x_bot_left , &A.y_bot_left);

	printf("Enter coordinates of top right point: " );
	scanf("%f%f" , &A.x_top_right , &A.y_top_right);

	float res = area(A);
	printf("\nArea: %.3f", res);

	return 0;
}


