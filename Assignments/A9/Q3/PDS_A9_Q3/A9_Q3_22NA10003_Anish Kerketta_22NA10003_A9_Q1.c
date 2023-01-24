#include <stdio.h>
#include <math.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 9-1
Description:Calculate the area of a rectangle*/
struct rectangle{						//Creating a structure
float x1,x2;
float y1,y2;
}rect;


int main()
{
printf("Enter the top left corner coordinates of the rectangle:");		//Write
scanf("%f %f",&rect.x1,&rect.y1);						//read
printf("Enter the bottom right corner coordinates of the rectangle:");		//write
scanf("%f %f",&rect.x2,&rect.y2);						//read
float a=sqrt((rect.x2-rect.x1)*(rect.x2-rect.x1))*sqrt((rect.y2-rect.y1)*(rect.y2-rect.y1));	//calculation
printf("Area: %f\n",a);								//printing the desired output
}

