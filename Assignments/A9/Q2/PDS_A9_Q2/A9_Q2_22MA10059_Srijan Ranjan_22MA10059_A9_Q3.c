/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of details of two circles and checks if they intersect.
*/
#include<stdio.h>
#include<math.h>
struct circle{																			//Structre to store the details of the circle.
	int x;
	int y;
	float radius;
};
int IsIntersecting(struct circle a,struct circle b){									//Function to check if the circles intersect.
	float dist,va;
	va=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	dist= pow(va,0.5);
	if(dist>= a.radius+ b.radius) return 0;
	else return 1;
}
int main(){
	struct circle a,b;																	
	scanf("%d",&a.x);
	scanf("%d",&a.y);
	scanf("%f",&a.radius);
	scanf("%d",&b.x);
	scanf("%d",&b.y);
	scanf("%f",&b.radius);
	int var=IsIntersecting(a,b);
	if(var==0) printf("Circles are not intersecting");								   //Printing when the circles intersect.
	else printf("Circles do intersect");
	return 0;
}