/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 9
Description : Program to check if two given circles intersect*/

#include <stdio.h>

typedef struct{  //defining a structure rectangle
	float x1;
	float y1;
	float x2;
	float y2;
} rectangle;

float Area(rectangle A){  //function to calculate the area of an axis rectangle
	float area=(A.x1-A.x2)*(A.y1-A.y2);  //calculating area
	return area;
}

int main(){
	rectangle R;
	printf("Rect: ");
	scanf("(%f %f) (%f %f)", &R.x1, &R.y1, &R.x2, &R.y2);
	printf("Area: %f",Area(R));
	return 0;
}

