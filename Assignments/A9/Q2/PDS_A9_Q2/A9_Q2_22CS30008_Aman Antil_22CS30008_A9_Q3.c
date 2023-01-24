/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 9
Description : Program to find if circles intersect
*/
#include <stdio.h>
#include<stdlib.h>
typedef struct{
	int x;
	int y;
	float r;
} circle; //structure for circle
circle a,b;
circle inp(circle c){
	scanf("%d", &c.x);
	scanf("%d", &c.y);
	scanf("%f", &c.r);
	return c;
}
int isIntersecting(circle d, circle e){
	int dis1= (d.x-e.x)*(d.x-e.x)+(d.y-e.y)*(d.y-e.y);
	float dis2= (d.r+e.r)*(d.r+e.r);
	if (dis1<=dis2) return 1;
	else return 0;
}// if distance between centres is greater than r1+r2 then circles donot intersect
int main(){
	printf("x y r\n");
	a=inp(a);
	b=inp(b);
	if(isIntersecting(a,b)) printf("Circles Intersect\n");
	else printf("Circles DONT'T Intersect\n");
	return 0;
}