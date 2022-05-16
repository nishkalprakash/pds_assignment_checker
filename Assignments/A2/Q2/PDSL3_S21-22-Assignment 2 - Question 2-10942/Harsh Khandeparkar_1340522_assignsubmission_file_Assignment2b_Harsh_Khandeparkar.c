/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 2(b)
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main() {
	srand(time(NULL));

	int n, k;

	printf("Enter the values of n and k respectively, separated by spaces: ");
	scanf("%d %d", &n, &k);

	int i;
	double D;
	for (i = 0; i < k; i++) {
		int d = 0;

		int j;
		for (j = 0; j < n; j++) {
			int p = rand() & 1 ? -1 : 1;
			d += p;
		}

		D += pow(d, 2);
	}

	printf("%lf\n", sqrt(D / k));

    return 0;
}