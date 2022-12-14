/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Lab test 1 : Set-A
Description : Program to check whether a triangle is acute-angled , right-angled or obtuse-angled.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x1,y1,x2,y2,x3,y3,ab,bc,ca,max;
	printf("Enter the three points(or coordinates) of the vertices of a triangle :\n");    //taking input of coordinates from the user
	scanf("(%f,%f),(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2,&x3,&y3);
	ab = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
	bc = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
	ca = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
	max = (ab>bc)?((ab>ca)?ab:ca):((bc>ca)?bc:ca);
	printf("%f\n",max);
	if(((max == ab) && (max >= bc +ca)) || ((max == bc) && (max >= ab +ca)) || ((max == ca) && (max >= bc +ab)))    //checking for triangle inequality
	printf("INVALID - Please enter appropriate values satisfying triangle inequality\n");
	if((pow(ab,2) == (pow(bc,2) + pow(ca,2))) || (pow(bc,2) ==(pow(ab,2) + pow(ca,2))) || (pow(ca,2) == (pow(ab,2) + pow(bc,2))))
	printf("Right Angled");

	
	return 0;
}
	
