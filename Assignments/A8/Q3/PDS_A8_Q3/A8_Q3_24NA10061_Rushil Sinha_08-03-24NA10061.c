//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program which inputs an array and returns the largest number possible from elements of array
#include <stdio.h>
#define N 100

int main() {
int n;
int A[N];
scanf("%d", &n);
for (int i = 0; i < n; i++){
	int element;
	scanf("%d", &element);
	A[i] = element;
}






printf("A[%d] = ",n);
printf("[");
for ( int read = 0; read < n-1; read++) { 	//printing modified array
	printf("%d, ", A[read]);
}
printf("%d]\n", A[n-1]);
printf("Largest = ");
for (int read = 0; read < n; read++) { 		//printing largest number
	printf("%d", A[read]);
}
return 0;
}
