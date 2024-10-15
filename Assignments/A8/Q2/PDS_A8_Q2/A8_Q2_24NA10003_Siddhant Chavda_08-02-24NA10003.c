#include <stdio.h>


int min_loc (int x[ ], int k, int size)
{
	int j, pos;
	pos = k;
	for (j=k+1; j<size; j++){
 		if (x[j] < x[pos]) pos = j;}
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
 	// TAKING THE INTEGER M
 	int m;
 	printf("\n ENTER m TO BE INSERTED:");
 	scanf("%d",&A[n]);
 	// SORTING IT AGAIN 
 	for (k=0; k<n;) {
 		x = min_loc (A, k, n+1);
		/* Swap x[k], x[m]*/
 		temp = A[k];
 		A[k] = A[x];
 		A[x] = temp;
 		k++;}
 	//PRINTING THE ANSWER
 	for (i=0;i<=n;i++){ printf("%d",A[i]);}
 	
 	

 	
 	
 
	
	
		
}
