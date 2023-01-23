/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:9
Question no:3
description:circles*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
	int x;
	int y;
	float r;
} circle;//define type structure
void input(circle *s1,circle *s2)//define input
{
	printf ("Enter x and y coordinate and radius of first circle:");
	scanf("%d %d %f",&s1->x,&s1->y,&s1->r);//accept x and y coordinate of second circle
	printf ("Enter x and y coordinate and radius of first circle:");
	scanf("%d %d %f",&s2->x,&s2->y,&s2->r);//acceot x and y coordinate of second circle
}
int isIntersecting(circle s1,circle s2)
{
	float distance=sqrt((s1.x-s2.x)*(s1.x-s2.x) + (s1.y-s2.y)*(s1.y-s2.y));//distance between centres
	float sum=s1.r +s2.r;//sum of radius
	if(distance <sum)//check condition for intersect
		return 1;//returns 1 if circles intersect else returns 0
	else
		return 0;
}
int main()
{
	circle c1,c2;
	input(&c1,&c2);//calls input to store values in structures a and b
	int flag=isIntersecting(c1,c2);//call isIntersecting to check whether the circles intersect
	if(flag==1)
		printf("Circles intersects\n");
	else
		printf("Circles DONT intersect\n");
	return 0;
}
