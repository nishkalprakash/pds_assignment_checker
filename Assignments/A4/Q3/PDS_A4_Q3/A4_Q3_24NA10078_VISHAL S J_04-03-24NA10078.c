#include<stdio.h>
int main()
{
	int n, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		for (j=0; j<=(n-i); j++) printf(" ");
		for (j=0; j<=i; j++) printf("1");
		printf("\n");
		}
	return 0;
}
	
	
