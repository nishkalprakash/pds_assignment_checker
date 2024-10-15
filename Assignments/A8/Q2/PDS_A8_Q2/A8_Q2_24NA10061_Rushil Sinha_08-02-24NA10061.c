//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//PROGRAM to ADD AN ELEMENT TO ARRAY AND DISPLAY THE SORTED ARRAY
#include <stdio.h>
#define N 101				//Extra 1 element for m to be added

void Bubble_sort(int A[], int size){	//Using bubble_Sort to sort array elements
	int temp;
	for (int i=0; i < size; i++){
		for (int j = 0; j < size - i -1; j++){
			if (A[j] > A[j+1]){
				temp = A[j];		//swaps the elements
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
}

int main() {
int n;
int m;
int A[N];
printf("n = ");
scanf("%d", &n);		//input the number of elements bwtween 2 and 100
printf("A[n] = ");
for (int i=0; i < n; i++){	//entering elemnts into array
	int element;
	scanf("%d", &element);
	A[i] = element;
}
Bubble_sort(A, n);		//Calls Function to sort array
printf("m = ");
scanf("%d", &m);	
A[n] = m;
Bubble_sort(A, n+1);		//Sorting again after adding m


printf("Output Array:\n");
printf("{");
for ( int read = 0; read < n; read++) { 	//printing sorted array
	printf("%d, ", A[read]);
}
printf("%d}\n", A[n]);
return 0;
}
