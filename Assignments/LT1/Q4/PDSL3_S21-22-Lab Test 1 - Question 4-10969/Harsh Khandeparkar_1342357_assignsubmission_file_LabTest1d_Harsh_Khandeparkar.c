/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	LabTest: 1(d)
*/

#include <stdio.h>

// assuming 10 points
int main() {
	// inputs
	int x_coordinates[10];
	int y_coordinates[10];

	// general iterator
	int i;

	// take input
	printf("Enter the 10 x-coordinates, in order (separated by spaces): ");
	for (i = 0; i < 10; i++) scanf("%d", &x_coordinates[i]);

	printf("Enter the 10 y-coordinates, in order (separated by spaces): ");
	for (i = 0; i < 10; i++) scanf("%d", &y_coordinates[i]);

	// mean of coordinates can be calculated by summing the coordinates and dividing by 10
	float x_mean = 0;
	float y_mean = 0;

	// sum all the coordinates
	for (i = 0; i < 10; i++) {
		x_mean += x_coordinates[i];
		y_mean += y_coordinates[i];
	}

	// divide the sum by 10 to get the mean
	x_mean /= 10;
	y_mean /= 10;

	// the slope m can be calculated by calculating the numerator and denominator separately
	float m_numerator = 0;
	float m_denominator = 0;

	for (i = 0; i < 10; i++) {
		// numerator and denominator can be calculated in the same loop
		m_numerator += (x_coordinates[i] - x_mean) * (y_coordinates[i] - y_mean);
		m_denominator += (x_coordinates[i] - x_mean) * (x_coordinates[i] - x_mean);
	}

	float m = m_numerator / m_denominator;

	// calculate y-intercept
	float b = y_mean - m * x_mean;

	// print final output
	printf("m = %.2f, b = %.2f, line equation y = %.2fx + %.2f\n", m, b, m, b);

	return 0;
}