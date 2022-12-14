/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Test 1 Set A
Description : With given coordinates check if the triangle is valid, and if it i then print the type of the triangle
*/
/* compile with -lm, i.e gcc 22EE10008_T1SA_Q1.c -lm*/

#include <stdio.h>																// Includes the standard IO header file
#include <math.h>																// Math library for pow() and sqrt() functions

float compute_length(int a1, int a2, int b1, int b2) {							// Returns the length of a line with given coordinates, A(a1, a2) and B(b1, b2)
	return sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2));								// Length of a line when given 2 coordinates is the square root of the squares of the difference of x and y values
}

float max(float a, float b, float c) {											// Returns the max of 3 numbers
	float max = a > b ? a : b;													// Find max of the first 2 numbers
	return max > c ? max : c;													// Find max of the last number and the previous max
}

int valid(float side1, float side2, float side3) { 								// Returns 1 if the triangle is valid, i.e if the greatest side is less than sum of other 2 sides, else 0
	if(2*max(side1, side2, side3) < side1 + side2 + side3) {					// Given condition is (let a is the greatest side) -> a < b + c, or 2*a < a + b + c (shorter code)
		return 1;
	}
	return 0;																	// No else as when if block is executed, the control exits from the function stack and so it does not reach this line
}

float check_acute(float side1, float side2, float side3) {						// Check is an angle is acute
	/*
	Using cosine formula cosA = (b^2 + c^2 -a^2)/2*b*c
	Where A is the angle and a is the side opposite to angle A.

	We know that as 0 <= x <= 90, 0 <= cosx <= 1
	So, if cosx > 0, then x is an acute angle.
	That is, for an angle to be acute, (b^2 + c^2 -a^2)/2*b*c > 0
	*/
	return (pow(side1,2) + pow(side2,2) - pow(side3,2))/2*side1*side2 > 0;
}

int is_right_angled(int a1, int a2, int b1, int b2, int c1, int c2) {			// Check is the triangle with given coords A(a1, a2), B(b1, b2) and C(c1, c2) is right angled or not
	/* Taking the square of the sides and not the actual float value of sides as there can be floating point difference when comparing the sum*/
	int side1_sq = pow(a1 - b1, 2) + pow(a2 - b2, 2);
	int side2_sq = pow(b1 - c1, 2) + pow(b2 - c2, 2);
	int side3_sq = pow(c1 - a1, 2) + pow(c2 - a2, 2);
	/* We need to check for all the permutions of the sides, as hte orientation of the right angles riangle can be anything */
	return side1_sq + side2_sq == side3_sq || side2_sq + side3_sq == side1_sq || side3_sq + side1_sq == side2_sq;		// Pythagoras theorem, a^2 + b^2 = c^2
}

int main() {
	int a1, a2, b1, b2, c1, c2;													// Declaring variables to store the coordinates as A(a1, a2), B(b1, b2) and C(c1, c2)
	printf("Input values in format (A1,A2),(B1,B2),(C1,C2) : ");
	scanf("(%d,%d),(%d,%d),(%d,%d)", &a1, &a2, &b1, &b2, &c1, &c2);				// Taking input

	/* Printing the inputted coords so that the user can check if they have the right input */
	printf("Coordinated inputted :\nA : (%d,%d)\nB : (%d,%d)\nC : (%d,%d)\n", a1, a2, b1, b2, c1, c2);

	// Computing the side lengths
	float side1 = compute_length(a1, a2, b1, b2);
	float side2 = compute_length(b1, b2, c1, c2);
	float side3 = compute_length(c1, c2, a1, a2);

	if(valid(side1, side2, side3)) {
		if(is_right_angled(a1, a2, b1, b2, c1, c2)) {
			printf("Right Angled\n");
		}
		else if(check_acute(side1, side2, side3) && check_acute(side1, side2, side3) && check_acute(side1, side2, side3)) {
			// If all the angles are acute, so we need to rotate the values of side1, side2and side3 during function calling
			printf("Acute Angled\n");
		}
		else {
			// if triangle is valid, and its not right angled or acute angled, then it will be obtuse angled
			printf("Obtuse Angled\n");
		}
	}
	else {
		printf("Invalid\n");
	}
	return 0;
}