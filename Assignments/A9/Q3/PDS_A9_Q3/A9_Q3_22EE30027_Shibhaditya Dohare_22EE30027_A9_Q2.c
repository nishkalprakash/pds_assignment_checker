/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 9
Discription : To find area of rectange
*/
#include<stdio.h>
#include<stdlib.h>
struct coordinate{    //declaration of struct storing coordinates
	int x;
	int y;
};
struct coordinate readco(){  //function to read the coordinates
	struct coordinate a;
	scanf("%d",&a.x);
	scanf("%d",&a.y);
	return a;
}
int area(struct coordinate a,struct coordinate b){ //cacluates the area of the rectangle
	int area;
	area = (b.x)*(b.y)-(a.x)*(a.y)-(a.y)*(b.x-a.x)-(a.x)*(b.y-a.y);
	if (area<0) area = area*-1;
	return area;
}
int main(){
	struct coordinate x, y; // to opposite points of the rectange
	x=readco();		//reads x coordinate
	y=readco();		//reads y coordinate
	printf("Area: %d\n", area(x,y)); //prints area
return 0;
}
