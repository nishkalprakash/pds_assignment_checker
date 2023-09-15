//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>

int main( ) {
  int A[50],n,i,j,k;
    printf("Enter the number of elements to be entered\n");
  scanf("%d",&n);
  printf("Array elements:\n");
  for(i=0;i<n;i++){
    A[i]= ((rand()%41)+10);
    printf("%d,",A[i]);}
  printf("\n");
  //for checking triplets sum is equal to 60 or not
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      for(k=j+1;k<n;k++){
	if((A[i]+A[j]+A[k]) == 60) {
	  printf("At %dth, %dth and %dth positions, array elements:%d,%d,%d\n",i,j,k,A[i],A[j],A[k]);
	}
      }
    }
  }
  return 0;
}
	  
