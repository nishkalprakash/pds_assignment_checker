/* Section 14
Name: Anubhav Mitra
Roll: 22EC30007
Test 1 Set A Q2
Description: Program to check whether a triangle with given coordinates is possible. If it is, the program further tells if the triangle is acute angled, right angled, or obtuse angled. Several functions have been used, the use of each is outlined in the code itself through comments.
*/

#include <stdio.h>
#include <math.h>

int valid (double a, double b, double c) { // checks whether the triangle's sides satisfy the triangle inequality
	if (a + b > c && b + c > a && c + a > b) {
		return 1;
	}
	return 0;
}

int check (int x1, int y1, int x2, int y2, int x3, int y3) { // computes the numerator of cosine rule, the sign of which gives the sign of the cosine of the largest angle in the triangle (opposite to the largest side)
	int sign_cosine = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3) - (x2 - x3) * (x2 - x3) - (y2 - y3) * (y2 - y3);
	if (!sign_cosine) return 1; // if cosine of largest angle is zero, 1 is returned for right triangle
	if (sign_cosine > 0) return 2; // if positive, 2 is returned for acute triangle
	else return 3; // if negative, 3 is returned for obtuse triangle
}	

int maxdist (double a, double b, double c) { // maxdist checks for the longest side, important for the cosine formula later on
	if (a >= b && a >= c) { // 1 is returned if a is max
		return 1;
	}
	if (b >= c && b >= a) { // 2 is returned if b is max
		return 2;
	}
	else return 3; // 3 is returned if c is max
}

double dist (int a, int b, int c, int d) { // computes the distances of the points via distance formula in the cartesian plane, type conversion has been used to change the integer value within to double before taking square root
	return sqrt((double)((a - c) * (a - c) + (b - d) * (b - d)));
}


int main() {
	int x1, y1, x2, y2, x3, y3; // initialising variables for coordinates
	printf("Enter coordinates of first point as x y: \n");
	scanf("%d%d", &x1, &y1);
	printf("Enter coordinates of first point as x y: \n");
	scanf("%d%d", &x2, &y2);
	printf("Enter coordinates of first point as x y: \n");
	scanf("%d%d", &x3, &y3); // taking points as input
	double a, b, c; // for ease of reference, assume a is opposite to (x1, y1), b to (x2, y2), c to (x3, y3) as per convention, double data type is used as sqrt of math.h returns double values
	c = dist (x1, y1, x2, y2); // corresponding distances are then calculated through the dist function
	a = dist (x2, y2, x3, y3); // it is important that the points passed are the ones corresonding to the sides as they have been defined earlier
	b = dist (x3, y3, x1, y1);
	if (!valid(a, b, c)) { // validity of the triangle is checked through the triangle inequality
		printf("Invalid input\n"); // if the sides are not found to meet the triangle inequality, invalid input is printed and a value is returned to terminate the program then and there
		return 0;
	}
	// on passing the validity check
	int max = maxdist (a, b, c); // an integer corresonding to the maximum side is returned
	int triangle; // triangle variable is initialised to store corresponding integer for when the triangle is right angled, acute angled, or obtuse angled
	switch(max) { // switch has been used to pass values such that the coordinates opposite to the longest side are taken first as input with check function
		case 1:
			triangle = check (x1, y1, x2, y2, x3, y3);
			break;
		case 2:
			triangle = check (x2, y2, x1, y1, x3, y3);
			break;
		case 3:
			triangle = check (x3, y3, x2, y2, x1, y1);
			break;
	}
	switch(triangle) { // now, based on the integer value returned, the corresponding nature of triangle is printed, returned by check function
		case 1: 
			printf("Right Angled\n");
			break;
		case 2:
			printf("Acute Angled\n");
			break;
		case 3:
			printf("Obtuse angled\n");
			break;
	}
	return 0;
}
