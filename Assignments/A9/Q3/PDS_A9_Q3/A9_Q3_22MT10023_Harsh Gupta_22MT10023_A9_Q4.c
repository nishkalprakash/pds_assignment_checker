/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 9
 Description : Program that calculates and prints the area of an axis parallel rectangle
*/


#include <stdio.h>			//including the standard input output library
#include <stdlib.h>			//including the stdlib library

typedef struct rectangle{		//defining a structure named rectangle
	double x;
	double y;
}rec;							//typedef struct rectangle to rec

double Area(rec *bl,rec*tr)			//defining a function to calculate the area of the rectangle
{
	double area;					//declaring the required variable area
	area = ((tr->y)-(bl->y))*((tr->x)-(bl->x));	//calculating the area
	return area;								//returing the value of area
}
int main()
{
	rec bl,tr;									//declaring two structure variable for bottom left and top right corners
	printf("Rect: ");									//prompting the user for input
	scanf("%lf %lf",&bl.x,&bl.y);								//taking the input
	scanf("%lf %lf",&tr.x,&tr.y);								//taking the input

	if(tr.x<bl.x || tr.y<bl.y)									//exchanging the values of the variables if input values were input in incorrect order
	{
		rec temp = tr;
		tr = bl;
		bl = temp;
	}
	double area = Area(&bl,&tr);								//calling the function Area
	if(area-(int)area==0)									//printing the area of the rectangle
		printf("Area: %0.0lf\n",area);
	else
		printf("Area: %0.2lf\n",area);
	return 0;						//int main function returns 0
}
