#include <stdio.h>

int main()
{
int n,i,m;

scanf("%d", &n); //size of array read//

int A[]; 
for (i=0; i<n; i++) { //filling up the array//
	scanf ("%d", &A[i]);
	}
	
min=A[0];

for (j=1; j<n-1; j++) {
	if (A[j]<min) {
	min = A[j];
	}
	return min;
	}
	
