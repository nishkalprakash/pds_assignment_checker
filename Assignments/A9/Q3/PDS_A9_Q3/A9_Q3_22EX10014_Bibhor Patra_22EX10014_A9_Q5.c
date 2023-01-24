/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 9
Description: Program to store coordinates of the top left and bottom right corner of an axis parallel rectangle

*/
#include<stdio.h>
#include<string.h>
int main()
{
	typedef struct
	{
		int xl;
		int yl;
		int xr;
		int yr;
	}rectangle; //structure defined to store the coordinates of the points
	rectangle data;
	printf("Please enter the coordinates of top left vertex");
	scanf("%d %d",&data.xl, &data.yl);// input scanned
	//scanf("%d",&data.yl);
	printf("Please enter the coordinates of bottom right vertex");
	scanf("%d %d",&data.xr, &data.yr); // input scanned
	//scanf("%d",&data.yr);
	int area;// variable declared
	area = (data.xr - data.xl)*(data.yl - data.yr);
	printf("Area:%d",area);// output printed
	return 0;

}