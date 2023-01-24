/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 9
Description : Check to see if 2 given circles with center coords and radius intersect or not
*/
// compile using -lm flag, i.e. gcc 22EE10008_A9_Q4.c -lm

#include <stdio.h>																			// Includes the standard IO header file
#include <math.h>																			// math library for pow function

struct circle{																				// circle structure
	int x;
	int y;
	float r;
};

float distance(int x1, int y1, int x2, int y2){
	return pow((pow(x1 - x2, 2) + pow(y1 - y2, 2)), 0.5);									// distance b/w 2 coords
}

int IsIntersectingCircle(struct circle c1, struct circle c2){
	return distance(c1.x, c1.y, c2.x, c2.y) < c1.r + c2.r;									// distance between centers, if it is less that sum of radii, then it is intersecting
}

int main() {
	struct circle c1, c2;																	// declaring variables
	
	printf("x y r\n");
	scanf("%d %d %f", &c1.x, &c1.y, &c1.r);													// taking input
	scanf("%d %d %f", &c2.x, &c2.y, &c2.r);
	printf("Cirles %sIntersect\n", IsIntersectingCircle(c1, c2) ? "" : "DON'T ");			// printing

	return 0;
}