/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 9
Description : Program to find out if two circles intersect or not
*/

#include<stdio.h>
#include<math.h>

typedef struct circle{
	int x;
	int y;
	float r;
}circle;

int IsIntersectingCircle(circle c1,circle c2)
{
	int dist_btw_center;
	dist_btw_center = pow(pow((c2.y - c1.y),2) + pow((c2.x - c1.x),2),0.5);

	if(dist_btw_center < c1.r + c2.r)
		printf("Circles Intersect\n");
	else
		printf("Circles DON'T Intersect\n");
	return 0;
}

int main()
{
	circle c1;
	circle c2;
	printf("x y r\n");
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);

	IsIntersectingCircle(c1,c2);

	return 0;
}
