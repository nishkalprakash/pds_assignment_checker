/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :9
 Question No :4
 Description: to find whether two cricles intersect
 */


#include <stdio.h>
#include <math.h>
 struct circle{
	float r;
	int x;
	int y;
};//structure circle defined 

int isIntersectingCircle(struct circle c1,struct circle c2){
   float d=sqrt((c1.x-c2.x)*(c1.x-c2.x) + (c1.y-c2.y)*(c1.y-c2.y)); //distance between two centres
   float r_sum=c1.r + c2.r ; //sum of two radii
   if(d<r_sum)
   	return 1;
   else
   	return 0;
}


int main(){
	struct circle c1,c2;//two variables of type circle
	printf("x y r");
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
	int flag=isIntersectingCircle(c1,c2);
	if(flag==1)
		printf("circles intersect");
	else
		printf("circles don't intersect");
}


