//Roll No: 23NA30028
//Name: Ritvik Puvvada

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[50],n,i,j,k;
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]= rand()%41+10;
  }
  printf("The array is:");
    for(i=0;i<n;i++){
     printf("%d ",A[i]);
   }
    printf("\n");  
  for(i=0;i<n;i++){
    for(j=i+1;j<n-1;j++){
      for(k=j+1;k<n-2;k++){
	if(A[i]+A[j]+A[k]==60){
	  printf("The corresponding indices are: %d %d %d\n",i,j,k);
	  printf("The triplet elements are %d %d %d\n",A[i],A[j],A[k]);
	  printf("\n");
	}
      }
    }
  }
  return 0;
}
  
  
