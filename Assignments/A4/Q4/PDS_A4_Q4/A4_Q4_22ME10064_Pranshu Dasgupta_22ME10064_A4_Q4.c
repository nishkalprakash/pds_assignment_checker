#include <stdio.h>

int main(){
	int n, i, j;
	printf("Enter any number: ");
	scanf("%d", &n);
//In this code i controls the row number and j controls column number
	for (i=1; i<=n; i++){
		for (j=1; j<=i; j++){ //Iterating i(row number) times because we need n numbers to be printed on the nth row
			if (j%2==1){ //If column number (j) is odd we print 1 else we print 0 
				printf("1 ");
			}
			else printf("0 ");
		}
		printf("\n"); //To move to the next row of printing
	}
	return 0;
}
