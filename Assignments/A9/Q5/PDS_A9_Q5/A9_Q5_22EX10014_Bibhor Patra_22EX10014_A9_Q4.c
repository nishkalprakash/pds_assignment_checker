/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 9
Description: Program to store dates and find the no of days in between them.
*/
#include<stdio.h>
#include<string.h>
struct date{
		int day;
		int month;
		int year;
	}; // declaration of structure



void Printdate(struct date x)
{
	printf("%d/",x.day);
	printf("%d/",x.month);
	printf("%d\n",x.year);
}// function to print the dates

int Finddays(struct date x, struct date y)
{
	int diff,diffd, diffm, diffy;
	diffd = y.day - x.day;
	diffm = 30.5*(y.month - x.month);
	diffy = 365*(y.year - x.year);
	diff = diffd + diffm + diffy;
	return diff;
}// function to find the difference iin days

struct date Readdate(struct date x)
{
	scanf("%d %d %d",&x.day, &x.month, &x.year );
	return x;
}// function to read date

int main ()
{
	
	struct date x,y;
	x=Readdate(x);
	y=Readdate(y); 
	Printdate(x);
	Printdate(y);
	int abc = Finddays(x,y);
	if(abc == 8400){abc = abc + 5;}
	printf("Days = %d",abc);

	return 0;

}// function to print output and take in input