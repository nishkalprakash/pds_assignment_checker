/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 9
 Description : write a program to check whether two circles intersect or not
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 
struct circle
{
	int x;
	int y;
	float r;
};
int isintersectingcircle(struct circle c1,struct circle c2){    //defining the isintersectingcircle function
	int distsq;
	distsq=sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
	if(distsq>c1.r+c2.r){                               //if distance between the centre of circles is more the sum of there radii then they won't intersect else they will

		printf("Circles DON'T Intersect\n");
	}
	else{
		printf("Circles Intersect");

	}
	return 0;
}

int main(){
	printf("x y r\n");
	struct circle c1,c2;
	scanf("%d %d %f",&c1.x,&c1.y,&c1.r);
	scanf("%d %d %f",&c2.x,&c2.y,&c2.r);
	int m=isintersectingcircle(c1,c2);    //calling the required function


}