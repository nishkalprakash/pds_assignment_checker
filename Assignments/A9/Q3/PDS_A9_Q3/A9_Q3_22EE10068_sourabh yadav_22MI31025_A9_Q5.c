/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:9
Question no:5
description:rectangle*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
	float x;
	float y;
} rec;//define type rec
float area(rec a,rec c)//define area
{
	float ar=abs((a.x-c.x)*(c.y-a.y));
	return ar;
}
int main ()
{
	rec a,c;//a and c stores x and y coordintaes of bottom left and top right
	printf ("Enter x and y coordinate top left:");
	scanf("%f %f",&a.x,&a.y);//accept x and y of first point
	printf("Enter x and y coordinates bottom right:");
	scanf("%f %f",&c.x,&c.y);
	float ar;//stores area
	ar=area(a,c);//calls function area
	printf("Area:%f",ar);//print area
	return 0;
}
