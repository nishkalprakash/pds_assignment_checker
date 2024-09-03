#include <stdio.h>
 #define N 100
 
int main()

{
 int n,i,j,min;

 
 printf ("Enter the number of elements to be printed:\n");
 scanf ("%d",&n);
 
 int a[n];
 
printf ("Original Array: \n");
  
 	for(i=0; i<n; i++) { 
 	scanf ("%d", &a[i]);
 	
 	
 	for (j=0; j<n; j++){
 		if (a[i]==a[j] && i!=j) {
 			printf (" Duplicates: %d \n", a[i]);}
 		
 		else {printf ("Unique array : %d \n", a[i]);
 			}
 			}
 		}
 		}
 	
 		
