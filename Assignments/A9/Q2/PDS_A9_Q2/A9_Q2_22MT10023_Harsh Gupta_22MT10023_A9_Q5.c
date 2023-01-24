/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 9
 Description : Program that finds if two circles intersect or not
*/



#include <stdio.h>		//including the standard input output library
#include <stdlib.h>		//including the stdlib library

typedef struct circle{		//defining a structure named circle
	int x;
	int y;
	float r; 
}circle;							//typedef struct circle to circle

int isIntersecting(circle *c1,circle *c2)			//defining the function isIntersecting
{
	float distance = ((c1->x-c2->x)*(c1->x-c2->x))+((c1->y-c2->y)*(c1->y-c2->y));		//calculating the square of the distance between the centers of the two circles
	if(distance < (c1->r+c2->r)*(c1->r+c2->r))
		return 1;																//returning 1 if the square of the distance between the centers is less than the square of the sum of the radius
	else
		return 0;
	return 0;																//returning 0 if the square of the distance between the centers is greater or equal to the square of the sum of the radius
}
int main()
{
	circle c1,c2;									//declaring two structure variable for the two circles
	printf("x y r:\n");										//prompting the user for input
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);					//taking the input
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);					//taking the input

	int flag = isIntersecting(&c1,&c2);							//calling the function isIntersecting
	
	if (flag == 1)
		printf("Circles Intersect\n");
	else
		printf("Circles DON'T Intersect\n");
	return 0;						//int main function returns 0
}
