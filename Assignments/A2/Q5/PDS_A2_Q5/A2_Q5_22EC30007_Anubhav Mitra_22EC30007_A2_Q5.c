#include <stdio.h>
#include <math.h>

int main() {

	int y, bounces; // declaring variables
	printf("Enter initial height: ");
	scanf("%d", &y); // height as input
	printf("Enter number of bounces: ");
	scanf("%d", &bounces); // bounces as input
	float distance = y * (1 + 2 * ((1 - pow(1/4, bounces - 1)) / 3)); // calculating distance
	printf("The total distance travelled is: %f", distance); // printing distance
	return 0;

}
