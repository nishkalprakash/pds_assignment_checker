/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 9
	Description : Calculating the area of a rectangle
*/
#include <stdio.h>

struct rectangle
{
	float rx,ry,lx,ly;
};

void arearec(struct rectangle a)
{
	float area=(a.rx-a.lx)*(a.ly-a.ry);

	area=(area>=0)?area:(-area);			//takes the absolute value of area

	printf("Area of the given rectangle is %f\n",area );
}

int main()
{

	struct rectangle rec;
	
	printf("Enter the x and y coordinate of the top left corner point : ");
	scanf("%f%f",&rec.lx,&rec.ly);

	printf("Enter the x and y coordinate of the bottom right corner point : ");
	scanf("%f%f",&rec.rx,&rec.ry);

	arearec(rec);

	return 0;
}