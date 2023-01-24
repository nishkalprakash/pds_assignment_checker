/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:9
Description:Program to display area of rectangle.
*/

#include<stdio.h>

struct rectangle
{
	int topLeft_x;
	int topLeft_y;
	int bottomRight_x;
	int bottomRight_y;           //structure that stores x and y coordinates of bottom right and top left points of rectangle
};

void area(struct rectangle x )  //function to print area
{
	printf("Area: %d",(x.topLeft_x-x.bottomRight_x)*(x.topLeft_y-x.bottomRight_y));
}

int main()
{
	struct rectangle r;  //declaring a structure
	printf("Rect: ");   
	scanf("(%d %d) (%d %d)",&r.topLeft_x,&r.topLeft_y,&r.bottomRight_x,&r.bottomRight_y);  //storing thex and y coordinates of bottom right and top left points of rectangle
	area(r);  //calling the funcion to print area
	return 0;
}