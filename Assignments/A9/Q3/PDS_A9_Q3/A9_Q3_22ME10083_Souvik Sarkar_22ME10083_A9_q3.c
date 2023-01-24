/*
*	section 14
*	Name: Souvik Sarkar
*   Roll no. 22ME10083
*	Assignment: 9
*	Topic:Structures
*	Question no.:3
*	Programme to calculate the area of rectangle
*/
#include<stdio.h>
//declaring structures for taking the x&y coordinates
typedef struct {
	int x;
	int y;
}rect;
//creatig area function to calculate thr area of th rectangle
int area(rect a, rect b){
	int A;
	A=(b.x - a.x)*(b.y - a.y);
	return A;
}
void main(){
	//varriables initialization
	rect bl,tr;
	int a;
	//taking i/p from user
	printf("Enter the coordinate of bottom left corner  :\n");
	scanf("%d%d",&bl.x,&bl.y);
	printf("Enter the coordinate of top right corner  :\n");
	scanf("%d%d",&tr.x,&tr.y);
	//logic
	a=area(bl,tr);
	// result or o/p
	printf("The area of the axis parallel rectangle is %d ",a);
}