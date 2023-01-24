/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 9
Description: finding area of axis parallel rectangle
*/

#include <stdio.h>

//structure definition
struct Rectangle{
	float x;
	float y;
};

void Area(struct Rectangle A, struct Rectangle B){
	if((B.x-A.x)*(B.y-A.y)>0)
		printf("Area: %f", (B.x-A.x)*(B.y-A.y));
	//if user input is not in accordance to top-left and bottom-right
	//method of finding area remains same, only area may come negative
	else 
		printf("Area: %f", -1*(B.x-A.x)*(B.y-A.y)); 
}

int main(){
	struct Rectangle TL, BR;
	printf("Rect : ");
	scanf("%f %f %f %f", &TL.x, &TL.y, &BR.x, &BR.y);
	//Inlvaid input if same x or y coordinates are inputted
	if((TL.x==BR.x) || (TL.y==BR.y)){
		printf("Invalid Input");
		return 0;
	}
	Area(TL, BR);
	return 0;
}