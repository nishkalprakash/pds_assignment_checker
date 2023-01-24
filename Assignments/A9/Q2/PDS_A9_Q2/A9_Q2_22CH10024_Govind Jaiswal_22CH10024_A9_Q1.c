/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 9
Description : Program to check if two given circles intersect
*/

#include <stdio.h>
#include <math.h>

struct circle    //defining a structure named circle
{
	int x;   //declaring the members of the structure circle
	int y;
	float r;
};

int isIntersectingCircle(struct circle c1,struct circle c2)
{	
	float rsum = c1.r + c2.r;    //declaring the structure variables
	float d = sqrt(pow((c2.x - c1.x),2) + pow((c2.y - c1.y),2));
	if(d<rsum)
	return 1;    //returning an appropriate value
	else 	
	return 0;
 }

int main()
{
	struct circle c1,c2;
	printf("Enter measurements of 1st circle :");
	scanf("%d%d%f",&c1.x,&c1.y,&c1.r);
	printf("Enter measurements of 2nd circle :");
	scanf("%d%d%f",&c2.x,&c2.y,&c2.r);    //reading the members of the structure variables
	
	int flag = isIntersectingCircle(c1,c2);
	if(flag==1)
	printf("\nCircles Intersect\n");    //printing the final reult
	else
	printf("\nCircles DON'T Intersect\n");
}
