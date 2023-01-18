/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 9
 Description : write a program to find area of rectangle
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

struct rectangle{   //defining the structure rectangle
	float x;
	float y;
};
 
float area(struct rectangle r1,struct rectangle r2){     //defining the function to calculate area
	float a1=(r1.x-r2.x)*(r1.y-r2.y);
	return a1;
}

int main(){
	struct rectangle r1,r2;
	printf("Rect: ");
	scanf("%f %f",&r1.x,&r1.y);
	
	scanf("%f %f",&r2.x,&r2.y);
	
	float z;
	z=area(r1,r2);
	printf("Area: %0.2f\n",z);         //printing the caluclated area
	
}