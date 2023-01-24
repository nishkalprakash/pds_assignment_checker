/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 9 
Description - Question 3 
*/
#include <stdio.h>
struct circle{                      // Defining the circle structure 
	float rad;
	int x;
	int y;
}; 
int iscircle(struct circle a , struct circle b){                         // checking the circle whether its intersecting or not 
	float d= (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	if (d<=((a.rad+b.rad)*(a.rad+b.rad))){
		return 1;
	}else return 0;
}
int main() {
	struct circle a,b;                 // taking all the coordinate as input
	scanf("%d",&a.x);
	scanf("%d",&a.y);
	scanf("%f",&a.rad);
	scanf("%d",&b.x);
	scanf("%d",&b.y);
	scanf("%f",&b.rad);
	if (a.rad>0&&b.rad>0){                                             // checking whether the radius is positive or not 
	if (iscircle(a,b)) printf("Circles Intersect ");                      // printing the amswer 
	else printf("Circles Don't Intersect");
	}else printf("Radius can't be negative");

	return 0;
}
