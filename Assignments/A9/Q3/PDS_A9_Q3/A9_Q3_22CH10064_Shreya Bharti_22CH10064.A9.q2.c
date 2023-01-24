#include <stdio.h>


typedef struct rectangle{		//declaring and defining structure

float bl_x;				//bl = coordinate of bottom left
float bl_y;
float tr_x;				//tr = coordinate of top right
float tr_y;

} rect ;


float area(rect rect1);			//declaration of function

int main(){

float ar;
rect rect1;
printf("Rect: ");
scanf("%f %f %f %f",&rect1.bl_x, &rect1.bl_y, &rect1.tr_x,&rect1.tr_y);		//takes input from user and stores them
ar= area(rect1);

printf("Area: %f",ar);				// prints area of the function


return 0;
}


float area(rect rect1){				//function definition

float length, width ;

length= rect1.tr_x - rect1.bl_x ;
width= rect1.tr_y - rect1.bl_y;

return length*width;
}

