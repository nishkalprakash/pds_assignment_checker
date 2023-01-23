/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 9
	Description : Checks whetheer two circles intersect
*/
#include <stdio.h>
#include <math.h>

struct circle
{
	int x,y;
	float r;
};

int IsIntersectingCircle(struct circle a,struct circle b)
{

	float dist_cent=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));		//Distance formula

	if(a.r+b.r>=dist_cent)
		return 1;

	// else if(a.r+b.r=dist_cent)		//can be used to check whether the circles touch each other
	// 	return -1;

	else return 0;

}

int main()
{
	struct circle c1,c2;

	printf("Enter the x and y coordinate of the centre of the first circle and its radius respectively\n");
	scanf("%d%d%f",&c1.x,&c1.y,&c1.r);

	printf("Enter the x and y coordinate of the centre of the second circle and its radius respectively\n");
	scanf("%d%d%f",&c2.x,&c2.y,&c2.r);

	if (c1.r<0 || c2.r<0)
	{
		printf("Radius cannot be negative!!!!\n");
		return 0;
	}

	if (IsIntersectingCircle(c1,c2))
		printf("Circles Intersect\n");

	else
		printf("Circles DON'T Intersect\n");

	return 0;
}