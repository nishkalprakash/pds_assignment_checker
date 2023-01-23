/*
Dhavale Surabhi
22ME10026
LAB10
Section 14
Question 1
*/


#include<stdio.h>
#include<math.h>


typedef struct circle
{
int x;
int y;
float r;
}cir;

//void intersectingthecircle(c1,c2);

int main()
{
	cir c1;
	cir c2;
	printf("enter the x coordinate of 1st circle");
	scanf("%d",&c1.x);
	printf("enter the y coordinate of 1st circle");
	scanf("%d",&c1.y);
	printf("enter the radius of 1st circle");
	scanf("%f",&c1.r);
        printf("enter the x coordinate of 2nd circle");
	scanf("%d",&c2.x);
	printf("enter the y coordinate of 2nd circle");
	scanf("%d",&c2.y);
	printf("enter the radius of 2nd circle");
	scanf("%f",&c2.r);
intersectingthecircle(c1,c2);
}

void intersectingthecircle(c1,c2){
	int a=(c1.x-c2.x)*(c1.y-c2.y)*(c1.x-c2.x)*(c1.y-c2.y)
	float b=sqrt(a);
	float c=c1.r+c2.r;
	if (b>c){printf("circle does not intersect");}
	else{printf("circle intersect");}
}
