//Name:Adarsh Singh
//Roll No.:23GG10001
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k,n,upper=100,lower=10,A[50],count=0;
  printf("Enter the number of values to be stored in the array:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]=(rand()%(upper-lower+1))+lower;
  }
  printf("The values stored in the array are:\n");
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      for(k=j+1;k<n;k++){
	if((A[i]+A[j]+A[k])==60){
	  printf("\nThe triplets that add upto 60 are: (%d,%d,%d)",A[i],A[j],A[k]);
	  printf("\nThe indices of the respective triplets are:(%d,%d,%d)",i,j,k);
	  count++;
	} 
      }
    }
  }
  if(count==0){
    printf("\nNo such triplets obtained");
  }  
  return 0;
}
