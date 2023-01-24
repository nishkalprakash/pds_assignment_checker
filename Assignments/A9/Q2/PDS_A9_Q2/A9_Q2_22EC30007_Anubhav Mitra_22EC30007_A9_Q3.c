/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 9
Description: Program to define struct circle with coordinates of centre and lengths of radii, then printing whether they intersect or not. Instead of comparing the lengths as given, I have compared their squares to avoid using sqrt function, avoiding both using the math library and slight precision errors that may arise due to double data type of math functions.

*/

#include <stdio.h>

typedef struct { // defining circle structure
	int x, y; // variables for coordinates of centre
	float r; // variable for length of radius
} circle;

int isIntersectingCircle (circle a, circle b) { // function to check for intersection
	int sq_centres = (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y); // calculating square of distance between centres by distance formula
	float sq_radii = (a.r + b.r) * (a.r + b.r); // calculating square of sum of radii
	return (sq_centres < sq_radii); // comparing squares of the lengths rather than just the lengths to avoid using math library for sqrt
}

int main() {
	circle a, b; // declaring two circles
	printf("Enter x-coordinate of centre of first circle: ");
	scanf("%d", &a.x); // 
	printf("Enter y-coordinate of centre of first circle: ");
	scanf("%d", &a.y);
	printf("Enter radius of first circle: ");
	scanf("%f", &a.r);
	printf("Enter x-coordinate of centre of second circle: ");
	scanf("%d", &b.x);
	printf("Enter y-coordinate of centre of second circle: ");
	scanf("%d", &b.y);
	printf("Enter radius of second circle: ");
	scanf("%f", &b.r); // taking all values as input
	if (isIntersectingCircle (a, b)) printf("Circles Intersect\n"); // printing circles intersect if distance between centres is less than sum of radii
	else printf("Circles DON'T Intersect\n"); // printing don't intersect otherwise
	return 0;
}
