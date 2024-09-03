
#include <stdio.h>
 #define N 100
 
int main()

{
 int n,i,min;

 
 printf ("Enter the number of elements to be printed:\n");
 scanf ("%d",&n);
 
 int a[n];
 
 if (n>N) {
 	printf("Error: number of elements>100");
 	return 0;
 	}
 	
 else {
  printf ("Original Array: \n");
  
 	for(i=0; i<n; i++) { 
 	scanf ("%d", &a[i]);
 	
 	}
 	printf ("Rearranged Array: \n");
 	
 	int j,k;
 	for (j=0; j<n; j++) {
 		if (a[j]<0) {
 		printf ("%d ", a[j]);
 		}
 	}
 	for (k=0; k<n; k++) {
 	if(a[k]>=0) {
 	printf ("%d ", a[k]);
 	}
 	}
 	
 }
 }
