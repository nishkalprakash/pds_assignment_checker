//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to GENERATE SERIES UPTO N TERMS

#include <stdio.h>

int main() {
	int i,n, term1 =1, term2 = -1;
	printf("Enter positive integer N:");
	scanf("%d", &n);
	if ((n>0) && (n % 2 != 0)){
		printf("1, -1,");
		for (i=1; i<=n/2; i++) {
			term1 = term1 - term2;
			term2 = term2 - term1;
			printf(" %d,", term1);
			if (i != n/2) {
				printf(" %d,", term2);
			}
		}
	}
	else if ((n>0) && (n%2 == 0)) {
		printf("1, -1,");
		for (i=1; i<=(n-2)/2; i++) {
			term1 = term1 - term2;
			term2 = term2 - term1;
			printf(" %d,", term1);
			if (i != n/2) {
				printf(" %d,", term2);
			}
		}
	}
	else {
		printf("N is invalid");
	}
return 0;
}

