/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 3(c)
*/

#include <stdio.h>
#include <math.h>

/**
 * Puts the result in a float array(result) of size 3 with the following elements:
 * 1st element: 0 if lines are parallel, 1 otherwise
 * 2nd element: x coordinate of point of intersection (0 if parallel)
 * 3rd element: y coordinate of point of intersection (0 if parallel)
 */
void compare_lines(
	int a1, int b1, int c1,
	int a2, int b2, int c2,
	float* result
) {
	if (a1 * b2 == a2 * b1) {
		printf("are parallel and hence there is no point of intersection.\n");

		result[0] = 0.0;
		result[1] = 0.0;
		result[2] = 0.0;
	}
	else {
		// point of intersection
		float x, y;

		x = (float)(c1*b2 - c2*b1) / (float)(a1*b2 - a2*b1);
		y = (float)(c1*a2 - c2*a1) / (float)(b1*a2 - b2*a1);

		printf("intersect at (%f, %f)\n", x, y);

		result[0] = 1.0;
		result[1] = x;
		result[2] = y;
	}
}

float side_length(
	float x1, float y1,
	float x2, float y2
) {
	return sqrt(
		(x1 - x2) * (x1 - x2) +
		(y1 - y2) * (y1 - y2)
	);
}

int main() {
	int a1, b1, c1;
	int a2, b2, c2;
	int a3, b3, c3;

	printf("Enter coefficients of Line 1: ");
	scanf("%d %d %d", &a1, &b1, &c1);

	printf("Enter coefficients of Line 2: ");
	scanf("%d %d %d", &a2, &b2, &c2);

	printf("Enter coefficients of Line 3: ");
	scanf("%d %d %d", &a3, &b3, &c3);

	printf("\n");

	printf("Lines 1 and 2 ");
	float l1_l2[3];
	compare_lines(
		a1, b1, c1,
		a2, b2, c2,
		l1_l2
	);

	printf("Lines 2 and 3 ");
	float l2_l3[3];
	compare_lines(
		a2, b2, c2,
		a3, b3, c3,
		l2_l3
	);

	printf("Lines 3 and 1 ");
	float l3_l1[3];
	compare_lines(
		a3, b3, c3,
		a1, b1, c1,
		l3_l1
	);
	printf("\n");

	if (l1_l2[0] + l2_l3[0] + l3_l1[0] == 3) {
		// if all three lines are non-parallel
		// find side lengths and area

		// to find side lengths
		float side1 = side_length(
			l1_l2[1], l1_l2[2],
			l2_l3[1], l2_l3[2]
		);

		float side2 = side_length(
			l2_l3[1], l2_l3[2],
			l3_l1[1], l3_l1[2]
		);

		float side3 = side_length(
			l3_l1[1], l3_l1[2],
			l1_l2[1], l1_l2[2]
		);

		printf("Side lengths = %f, %f, %f\n", side1, side2, side3);

		// to find area using Heron's formula
		float s = (side1 + side2 + side3) / 2;
		float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

		printf("Area = %f\n", area);
	}
	else printf("Some lines are parallel and hence do not form a triangle.\n");

	return 0;
}