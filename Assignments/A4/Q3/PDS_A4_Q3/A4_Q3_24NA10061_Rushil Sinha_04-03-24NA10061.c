//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to display numero-pyramid
#include <stdio.h>

int main() {
	int height, i,j;
	printf("Enter height of Numero-pyramid:");
	scanf("%d", &height);
	for (i= height; i>=0; --i) {
		printf(" ");
		for (j=1; j<=height ; j++) {
			printf("%d \n", j);
		}
	} 
	
return 0;
}
