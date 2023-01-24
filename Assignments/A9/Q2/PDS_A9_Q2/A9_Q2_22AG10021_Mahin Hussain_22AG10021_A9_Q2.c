/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:9
Description:Program to find if two circles intersect.
*/

#include<stdio.h>
#include<math.h>

struct circle
{
	int x;
	int y;
	float r;      //structure containing x,y coordinates of centre of circle and its radius
};

int IsIntersectingCircle(struct circle x1, struct circle x2)  //function to check if circle is intersecting or not
{
	int d=pow((x1.x-x2.x),2)+pow((x1.y-x2.y),2);
	if(d<pow((x1.r+x2.r),2))
		return 1;       //return 1 if circles are intersecting
	else 
		return 0;          //return 0 if circles are not intersecting
}

int main()
{
	struct circle c1,c2;       
	printf("Enter the x,y coordinate of the centre and radius of the circle\n");
	printf("x y r\n");
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);    //storing x,y coordinates of centre of circle and its radius
	if(IsIntersectingCircle(c1,c2)==1)     //calling function to check if the circles are intersecting or not
		printf("Circles Intersect");
	else
		printf("Circles DON’T Intersect");
	return 0;
}