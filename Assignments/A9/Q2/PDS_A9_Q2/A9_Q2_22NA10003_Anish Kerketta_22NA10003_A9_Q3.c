#include <stdio.h>
#include <math.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 9-3
Description:To Check whether the circles intersect or not*/
typedef struct circle{							//creating structure
int x;
int y;
float r;
} circle;

int IsIntersectingCircle(circle c1,circle c2)				//function to check if intersecting or not
{
	int a=c1.x-c2.x;
	int b=c1.y-c2.y;
	float d=sqrt((a*a)+(b*b));
	float rad=c1.r+c2.r;
	if(d>rad)
	return 0;
	else
	return 1;
}
void main()								//main function
{
	circle c1,c2;
	printf("x y r\n");						//write
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);				//read values for circle 1
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);				//read values for circle 2
	int check;
	check=IsIntersectingCircle(c1,c2);
	if(check==1)							//checking condition for intersection
	printf("Circles Intersect\n");
	else 
	printf("Circle Dont Intersect\n");
}
