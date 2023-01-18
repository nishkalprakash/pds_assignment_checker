/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 9
Description : Program to find area of rectangle
*/
#include <stdio.h>
#include<stdlib.h>
typedef struct{
	int x1;
	int y1;
	int x2;
	int y2;
} rec; // structure for rectangle having two points (top right and bottom left)
int main(){
	rec a;
	int area;
	printf("Rect: ");
	scanf("%d %d %d %d", &a.x1,&a.y1,&a.x2,&a.y2);
	//formula for calculating mod of area
	area= (((a.x1-a.x2)*(a.y1-a.y2))>0) ? ((a.x1-a.x2)*(a.y1-a.y2)) : (-(a.x1-a.x2)*(a.y1-a.y2));
	printf("Area : %d", area);
	return 0;
}