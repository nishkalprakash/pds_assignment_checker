/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 9
Question No. : 2
Description : To find if the given circles intersect
*/

#include<stdio.h>
#include<math.h>						//Including the maths library

struct circle{							//Defining a structure with the name circle
	int x;
	int y;
	float r;
}c1,c2;

void IsIntersectingCircle(struct circle c1,struct circle c2){	//Creating a function which prints if the circles are intersecting or not
	if(c1.r+c2.r>=sqrt(pow(c1.x-c2.x,2)+pow(c1.y-c2.y,2)))
		printf("Circles Intersect\n");
	else	printf("Circles Don't Intersect\n");
}

int main(){
	printf("x y r\n");	
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
	IsIntersectingCircle(c1,c2);				//Calling the function
return 0;
}
