/*
A vector is an n-dimensional data, which can be stored in an array of integers of size n. For example, v=ix+jy+kz can be stored as [x,y,z] where i,j, and k are three dimensions. You have to write a program to do the following.
Define a structure to store a vector of dimension n>=2. The value of n is known at the run-time of your program.
Using your structure definition, read two vectors, say A and B from the user.
For the two vectors A and B, find the cosine angle between the two vectors A and B.
Hint: cos Θ = (A.B)/(|A||B|), where A.B denotes scalar product of two vectors A and B, and |A|, |B| denotes the magnitude of a vector A and B respectively.
Decide if the two vectors are parallel or perpendicular to each other. 
	[5+5+(5+5) +5 = 30]


Test cases:

#
INPUT (Vector A and Vector B)
OUTPUT
1
A: [1, 0]
B: [0, 1]
Cosine angle: 0
Angle in degrees: 90°
Relation: Perpendicular
2
A: [1, 2, 3]
B: [2, 4, 6]
Cosine angle: 1
Angle in degrees: 0°
Relation: Parallel
3
A: [1, 0, 0]
B: [1, 1, 0]
Cosine angle: 0.707
Angle in degrees: 45°
Relation: Neither Parallel nor Perpendicular
4
A: [3, -3, 1]
B: [4, 4, -2]
Cosine angle: -0.5
Angle in degrees: 120°
Relation: Neither Parallel nor Perpendicular
5
A: [1, 0, 0]
B: [-1, 0, 0]
Cosine angle: -1
Angle in degrees: 180°
Relation: Parallel
6
A: [1, 1]
B: [1, -1]
Cosine angle: 0
Angle in degrees: 90°
Relation: Perpendicular
*/

// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Code to calculate the cosine angle between two vectors and check if they are parallel or perpendicular
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// A structure to store a vector of dimension n>=2
struct vector {
	int n;
	int *data;
};

// Method to read the vector
void read_vector(struct vector *v) {
	scanf("%d", &v->n);
	v->data = (int *)malloc(v->n * sizeof(int));
	for (int i = 0; i < v->n; i++)
		scanf("%d", &v->data[i]);
}

// Method to calculate the dot product of two vectors
int dot_product(struct vector A, struct vector B) {
	int sum = 0;
	for (int i = 0; i < A.n; i++)
		sum += A.data[i] * B.data[i];
	return sum;
}

// Method to calculate the magnitude of a vector
float magnitude(struct vector A) {
	int sum = 0;
	for (int i = 0; i < A.n; i++)
		sum += A.data[i] * A.data[i];
	return (float)sqrt(sum);
}

int main() {
	struct vector A, B;
	// Reading the two vectors
	read_vector(&A);
	read_vector(&B);
	// Calculating the cosine angle between the two vectors
	int dot = dot_product(A, B);
	float magA = magnitude(A);
	float magB = magnitude(B);
	float cosine = dot / (float)(magA * magB);
	// Printing the cosine angle and the angle in degrees
	printf("Cosine angle: %.3f\n", cosine);
	printf("Angle in degrees: %.0f\n", acos(cosine) * 180 / 3.14159);
	// Calculating abs_c = absoulte value of cosine
	float abs_c = (cosine < 0) ? -cosine : cosine;
	// Checking if the two vectors are parallel or perpendicular
	if ((1-abs_c) <= 0.0001)
		printf("Relation: Parallel\n");
	else if (abs_c <= 0.0001)
		printf("Relation: Perpendicular\n");
	else
		printf("Relation: Neither Parallel nor Perpendicular\n");
	return 0;
}