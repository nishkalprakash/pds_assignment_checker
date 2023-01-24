/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 9
Question No. : 1
Description : Finding the area of an axis parallel rectangle if 2 opposite corner coordinates are given
*/

#include<stdio.h>

typedef struct rec{					//Here we are defining our structur which we are naming as rec
	int x1;						//These are our variables
	int y1;
	int x2;
	int y2;
}a;

int area(struct rec a){					//We are creating a funcion to calculate the area of the rectangle
	int _area=(a.x2-a.x1)*(a.y2-a.y1);
	if(_area>=0)return(_area);
	else return(- _area);
}

int main(){
	int x1,y1,x2,y2;
	struct rec a;
	printf("Rect:  ");
	scanf("(%d %d) (%d %d)",&a.x1,&a.y1,&a.x2,&a.y2);	//Taking input from the user
	printf("Area: %d\n",area(a));				//Output
return 0;
}
