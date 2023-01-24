/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 9
Description : Program to determine the area of a rectangle
*/

#include<stdio.h>

typedef struct rectangle{
	int x;
	int y;
}rectangle;

int area_rectangle(rectangle TLC,rectangle BRC)
{
	int area;
	area = (BRC.y - TLC.y)*(BRC.x - TLC.x);
	printf("Area: %d\n",area);
	return 0;
}

int main()
{
	rectangle TLC;      //Top Left Corner
	rectangle BRC;      //Bottom Right Corner  

	printf("Enter top left coordinates(x y) of a rectangle: ");
	scanf("%d %d",&TLC.x,&TLC.y);

	printf("Enter bottom right coordinates(x y) of the rectangle: ");
	scanf("%d %d",&BRC.x,&BRC.y);

	area_rectangle(TLC,BRC);

	return 0;
}
