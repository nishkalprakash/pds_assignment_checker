/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 9
Description : Program to check if two given circles intersect*/

#include <stdio.h>
#include <math.h>

typedef struct{  //defining a new structure circle
	int x;
	int y;
	float r;
} circle;

int IsIntersectingCircle(circle a, circle b){  //checking if the circles intersect
	int flag=0;
	float temp, d1, d2=a.r+b.r;  //d2 is the sum of radii
	temp=((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	d1=pow(temp,0.5);  //d1 is distance between centers of the circles
	if (d1<d2) flag=1;  //if distance beteween centers is less than sum of their radii then circles do intersect
	return flag;
}

int main(){
	circle A, B;
	printf("x y r\n");
	scanf("%d %d %f", &A.x, &A.y, &A.r);
	scanf("%d %d %f", &B.x, &B.y, &B.r);
	printf("Circles ");
	if (IsIntersectingCircle(A,B)) printf("Intersect\n");
	else printf("DON'T Intersect\n");
	return 0;
}


