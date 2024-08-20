//Name: Rushil Sinha
//Roll number: 24NA10061
//Program to take four integers as input and check if exavtly two of them are equal
#include <stdio.h>
int main() {
	int a, b, c, d, counter=0;	//counter checks the number of pairs which are equal
	printf("Enter 4 integers:");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((a==b) || (a==c) || (a==d)) {
		counter++;
		}
	if ((b==c) || (b==d)) {
		counter++;
		}
	if (c==d) {
		counter++;
	}
	if (counter != 1) {
		printf("NO");
	}
	else {
		printf("YES");
	}
return 0;
}
