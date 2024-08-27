
#include <stdio.h>
 int main ()
 {

int a, row, ss, col, x;

printf("Enter a number: \n");
scanf("%d", &a);

for (row=1; row<=a; ++row) {
	for(ss=1; ss<=(a-row) ; ss++) {
	printf (" ");
	}
	x=row;
	
	for(col=1; col<row; col++) {
	printf ("%d", x);
	x++;
	}
	for(col=x-2; col>=row; col--) {
	printf ("%d \n", col);
	}
}
}
