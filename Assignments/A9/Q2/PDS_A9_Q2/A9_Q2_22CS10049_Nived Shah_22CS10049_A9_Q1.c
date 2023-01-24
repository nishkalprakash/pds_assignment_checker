/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 9
Description: Check if 2 circles intersect or no
*/

#include <stdio.h>
#include <math.h>

//structure definition
struct circle{ 
	int x;
	int y;
	float r;
};

int IsIntersectingCircle(struct circle c1, struct circle c2){
	//if distance between centres is less than sum of radius, circles MAY or MAY NOT intersect.
	//As per question the following condition should hold
	if(sqrt((pow((c1.x-c2.x),2))+pow((c1.y-c2.y),2)) < (c1.r+c2.r))
		return 1;
	else 
		return 0;
}

int main(){
	struct circle c[2]; //storing entities in an array
	for(int i=0; i<2; i++){
		printf("Enter x and y coordinates of center, and radius of Circle %d :\n", i+1);
		scanf("%d %d %f", &c[i].x, &c[i].y, &c[i].r); //storing attributes of entities
	}
	int isTrue;
	isTrue = IsIntersectingCircle(c[0], c[1]);
	if(isTrue==1)
		printf("Circles Intersect \n");
	else
		printf("Circles DON'T Intersect\n");
	return 0;
}