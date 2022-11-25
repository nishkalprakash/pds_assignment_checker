#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

	int a,b,c; // declaring coefficient variables

	scanf("%d %d %d", &a, &b, &c); // taking coefficient inputs

	float root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a); // calculating root1
	float root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a); // calculating root2
	printf("The roots are: %f, %f", root1, root2); // printing roots
	return 0;
	
}
