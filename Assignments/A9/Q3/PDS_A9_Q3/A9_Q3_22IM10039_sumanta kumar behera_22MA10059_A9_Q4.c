/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of the details of rectangle, and outputs it area.
*/
#include<stdio.h>
int main(){
	typedef struct{										//Structure to store coordinates.
		float x;
		float y;
	}coordinate;
	coordinate a,b;
	scanf("%f",&a.x);
	scanf("%f",&a.y);
	scanf("%f",&b.x);
	scanf("%f",&b.y);
	float area;
	area= (b.x - a.x)*(b.y - a.y);                          //Computation of area.
	printf("Area: ",area);
	return 0;
}