#include <stdio.h>


int min_loc (int x[ ], int k, int size)
{
	int j, pos;
	pos = k;
	for (j=k+1; j<size; j++){
 		if (x[j] > x[pos]) pos = j;}
	return pos;
}

int main(){
	int A[101];
	int i,n;
	// FILLING OF ARRAY
	printf("ENTER THE SIZE OF ARRAY:");
	scanf("%d \n",&n);
	for (i=0;i<n;i++) scanf("%d",&A[i]);
	
	// SORTING
	int k,x,temp;
	for (k=0; k<n;) {
 		x= min_loc (A, k, n);
		/* Swap x[k], x[m]*/
 		temp = A[k];
 		A[k] = A[x];
 		A[x] = temp;
 		k++;}
 	printf("ARRAY IS:")
 	for (i=0;i<n;i++) printf("%d",A[i]);}
 	printf("LARGEST NUMBER:")
 	for (i=0;i<n;i++) printf("%d",A[i]);}
