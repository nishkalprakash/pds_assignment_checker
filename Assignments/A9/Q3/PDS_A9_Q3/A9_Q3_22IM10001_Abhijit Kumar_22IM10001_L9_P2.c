/*Name : Abhijit Kumar
SECTION 14
ROLL NO. 22IM10001
QUESTION 2
TOPIC:-Finding the area of a rectangle.*/
#include<stdio.h>
int main()
{
	struct rectangle_point
	{
		float x;
		float y;
	};
	struct rectangle_point r1,r2;
	printf("\nEnter the x-coordinate of the bottom right corner");
	scanf("%f",&r2.x);
	printf("\nEnter the y-coordinate of the bottom right corner");
	scanf("%f",&r2.y);

	printf("\nEnter the x-coordinate of the top left corner");
	scanf("%f",&r1.x);
	printf("\nEnter the y-coordinate of the top left corner");
	scanf("%f",&r1.y);
	float area;
	area=(r2.x-r1.x)*(r1.y-r2.y);
	printf("Area: %f",area);
}

