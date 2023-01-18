/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 9
	   DESCRIPTION    : A C program to find the are of a axis-parallel rectangle
*/


#include<stdio.h>
#include<math.h>

struct rectangle{

	float x1;
	float y1;
	float x2;
	float y2;
};

int main(){

	struct rectangle R1;
	struct rectangle R2;
	
	// input the coordinates of 1st rectangle
	printf("enter the coordinates of 1st rectangle :");
	scanf("%f %f",&R1.x1,&R1.y1);

	// input the coordinates of 2nd rectangle
	printf("enter the coordinates of 2nd rectangle :");
	scanf("%f %f",&R2.x2,&R2.y2);
	
	//find the diameter length of the rectangle

	float a=sqrt(pow((R1.x1-R2.x2),2)+pow((R1.y1-R2.y2),2));

	//print the area of the rectangle
	printf("the area of the inputed rctangle is :%f",(a*a)/2);


	return 0;
}

