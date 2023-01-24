/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 9
Description : Program to compute area of an axis-parallel rectangle using structures
*/

#include <stdio.h>
#include <math.h>

typedef struct rectangle    //defining a structure for storing data of rectanglur vertices
{
	int x;
	int y;
}rect;

int area(rect A,rect C)    //passing x-y coordinates of bottom-left and top-right verices
{
	rect B,D;
	int AB,BC;
	B.x = C.x;
	B.y = A.y;
	D.x = A.x;
	D.y = C.y;
	AB = sqrt(pow((B.x - A.x),2) + pow((B.y - A.y),2));
	BC = sqrt(pow((C.x - B.x),2) + pow((C.y - B.y),2));
	return (AB * BC);    //returning the computed area
}

int main()
{
	rect a,c;    //declaring structure variables for two opposite vertices
	printf("Enter coordinates of bottom-left and top-right verices:");
	scanf("%d%d%d%d",&a.x,&a.y,&c.x,&c.y);
	printf("Rect: (%d %d) (%d %d) \n",a.x,a.y,c.x,c.y);
	
	int area_rectangle = area(a,c);    //calling the function area
	printf("Area: %d\n",area_rectangle);    //displaying the final result
}

