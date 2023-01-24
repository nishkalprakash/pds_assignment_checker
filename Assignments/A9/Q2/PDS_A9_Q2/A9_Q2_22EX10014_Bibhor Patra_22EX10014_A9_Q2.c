/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 9
Description: Program to find if two circles intersect
*/

#include<stdio.h>
#include<math.h>
struct circle
{
	int x;
	int y;
	float radius;
};// structure defined
int checkintersection(struct circle one,struct circle two)
{
	float distance, distancereal;
	distance = (one.x-two.x)*(one.x-two.x) + (one.y-two.y)*(one.y-two.y);
	distancereal = pow(distance,0.5);
	if(distancereal>= one.radius + two.radius){return 0;}
	else{return 1;}
}// function to check if two circles intersect
int main()
{
	struct circle one, two;
	printf("Please enter the coordinates and radius of first circle");
	scanf("%d",&one.x);
	scanf("%d",&one.y);
	scanf("%f",&one.radius);
	printf("Please enter the coordinates and radius of second circle");
	scanf("%d",&two.x);
	scanf("%d",&two.y);
	scanf("%f",&two.radius);// data scannned
	int flag;
	flag = checkintersection(one, two);
	if(flag==0)
	{
		printf("Circles arent intersecting");
	}
	else {printf("Circles are intersecting");}// output printed
	return 0;
}