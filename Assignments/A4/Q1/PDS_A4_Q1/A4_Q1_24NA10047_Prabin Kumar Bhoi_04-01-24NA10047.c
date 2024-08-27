#include<stdio.h>
int main() {
	int N;
	printf("Enter a positive number:");
	scanf("%d",&N);
	
	if (N<=0) {
		printf("N is invalid ");
	}
	else {
	for (int i=1;i<=N;i++) {
		printf("-%d, ",i);
	}
	return 0;
	}
}
