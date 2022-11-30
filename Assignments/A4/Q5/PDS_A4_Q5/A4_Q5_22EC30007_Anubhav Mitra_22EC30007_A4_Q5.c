/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 4
Description: Program to estimate root of a cubic polynomial. To initialise a and b input is repeatedly taken from the user until the functional values are of opposite signs. After that an algorithm analogous to binary search has been applied to keep updating a and b until the corresponding c value falls within the given range. The code may be made far more concise by the use of a function to calculate the respective functional values.
*/

#include <stdio.h>

int main () {
	int c0, c1, c2, c3; // creating variables for coefficients
	double a, b, c, p_of_a, p_of_b, p_of_c; // creating variables for functional values
	printf("Enter constant coefficient: ");
	scanf("%d", &c0);
	printf("Enter first coefficient: ");
	scanf("%d", &c1);
	printf("Enter second coefficient: ");
	scanf("%d", &c2);
	printf("Enter third coefficient: ");
	scanf("%d", &c3); // taking coefficients as input
	
	do {
		printf("Please enter a and b such that the functional values are of opposite signs.");
		printf("Enter a: ");
		scanf("%lf", &a);
		printf("Enter b: ");
		scanf("%lf", &b);
	} while ((c0 + c1 * a + c2 * a * a + c3 * a * a * a) * (c0 + c1 * b + c2 * b * b + c3 * b * b * b) >= 0); // taking a and b until p(a) and p(b) are of opposite signs

	p_of_a = (c0 + c1 * a + c2 * a * a + c3 * a * a * a); // calculating p(a)
	p_of_b = (c0 + c1 * b + c2 * b * b + c3 * b * b * b); // calculating p(b)
	
	while (1) {
		c = (a * p_of_b - b * p_of_a) / (p_of_b - p_of_a);
		p_of_c = (c0 + c1 * c + c2 * c * c + c3 * c * c * c); // calculating c and p(c)
		if ((p_of_c) * (p_of_c) < 0.000001) {
			break; // if c falls within the desired range, the loop is broken
		}
		if (p_of_a * p_of_c > 0) {
			a = c;
			p_of_a = (c0 + c1 * a + c2 * a * a + c3 * a * a * a); // if p(a) and p(c) are of same signs a is updated to c and p(a) is also updated
		}
		else {
			b = c;
			p_of_b = (c0 + c1 * b + c2 * b * b + c3 * b * b * b); // else b and p(b) are updated to c and p(c) respectively
		}
	}

	printf("Roof of the polynomial: %lf", c); // root is printed
	return 0;
}
