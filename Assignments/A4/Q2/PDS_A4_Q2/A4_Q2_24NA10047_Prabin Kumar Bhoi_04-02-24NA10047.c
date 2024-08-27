#include<stdio.h>
int main() {
	int x;
	printf("Enter number:");
	scanf("%d ",&x);
	
	int i=1;
	while (i) {
		printf("largest number is %d",x);
		printf("Enter number:");
		scanf("%d ",&x);
		i++;
	}
	return 0;
	
}
