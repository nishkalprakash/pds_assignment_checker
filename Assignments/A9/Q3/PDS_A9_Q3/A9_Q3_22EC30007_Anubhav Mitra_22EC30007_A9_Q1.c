/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 9
Description: Program to store coordinates of a rectangle in the Cartesian plane, and then access those values to calculate the area of the rectangle. Since its sides are parallel to both axes, we only take the coordinates of two opposite points, and then multiply length times breadth which is each given by the difference of respective abcissa and ordinates. To fit test cases and avoid precision errors of float data type, the coordinates have been assumed to be integers (else, float would work too).

*/

#include <stdio.h>

typedef struct { // defining the structure using typedef
	int x1, y1, x2, y2; // declaring int variables for the coordinates
} rectangle;

int area (rectangle a) { // function to calculate area
	int area = (a.x1 - a.x2) * (a.y1 - a.y2); // calculating breadth times length to give area
	return (area > 0) ? area : -1 * area; // returning mod of area
}

int main() {
	rectangle a; // declaring structure a
	printf("Enter x-coordinate of first point: ");
	scanf("%d", &(a.x1)); // scanning variables
	printf("Enter y-coordinate of first point: ");
	scanf("%d", &(a.y1));
	printf("Enter x-coordinate of second point: ");
	scanf("%d", &(a.x2));
	printf("Enter y-coordinate of second point: ");
	scanf("%d", &(a.y2));
	printf("Area: %d\n", area(a)); // printing the value coming from function call
	return 0;
}
