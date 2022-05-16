/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 2(a)
*/

#include <stdio.h>
#include <math.h>

// since floating point numbers can have precision error
int isAlmostZero(double f) {
    // if f multiplied by a large number and rounded is 0, then f is close enough to 0
    return round(f * 1000000) == 0;
}

int main() {
	int k;
	double z;

	printf("Enter the values of z and k respectively(separated by a space): ");
	scanf("%lf %d", &z, &k);

	int i;
	int is_trapped = 0;

	for (i = 1; i <= k; i++) {
		double s = sqrt(z);
		double new_z;

		if (is_trapped) {
			// These are the new conditions mentioned in the comment box
			s = s - 1.0 / i;
			new_z = fabs(z - pow(s, 2));

			// It turns out the value of z does not become 0.000000 on the 24th iteration with these conditions applied
			// but in the given example, z becomes 0.000000 on the 24th iteration
		}
		else new_z = fabs(z - s);

		printf("(%lf, %d), ", new_z, i);

		// because of precision issues
		is_trapped = isAlmostZero(z - new_z);

		z = new_z;

		// It turns out the example given in the question doesn't hit 0 in 50 iterations
		// unless the threshold for what is considered 0 is changed
		if (isAlmostZero(z)) break;
	}

    return 0;
}