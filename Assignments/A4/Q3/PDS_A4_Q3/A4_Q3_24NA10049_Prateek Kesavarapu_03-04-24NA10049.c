// Program to make a Numero Pyramid
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>

int main(){
	int n, center = 1; // Initialization of the center
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){ // First loop for counting through the number of rows
		int k = 0;
		while(k < (n - i)){ // For counting the number of spaces before the numbers print
			printf(" ");
			k++;
		}
		for(int j = center - i + 1; j <= center; j++){ // First set of numbers till the center
			if((j / 10) == 0){
				printf("%d", j);
			}
			else{
				printf("%d", j % 10);
			}
		}
		for(int j = center - 1; j >= center - i + 1; j--){ // From after the center till 1
			if((j / 10) == 0){
				printf("%d", j);
			}
			else{
				printf("%d", j % 10);
			}
		}
		while(k > 0){ // Last set of spaces
			printf(" ");
			k--;
		}
		printf("\n");
		center += 2; // Incrementing the center by 2 to make sure the center is odd
	}
	return 0;
}
