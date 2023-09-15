#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n,count=0,upper=100,lower=10,A[50],temp;
  printf("Enter the number of values to be stored in the array:\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]=(rand()%(upper-lower+1))+lower;
  }
  printf("The orignal values stored in the array are:\n");
  for(i=0;i<n;i++){
    printf(" %d",A[i]);
  }
  for(i=0;i<n;i++){
    if((i%2==0)&&(A[i]>A[i+2])){
      temp=A[i];
      A[i]=A[i+2];
      A[i+2]=temp;
      count++;
    }
  }
  printf("\nThe array after interchanging the elements in it becomes:\n");
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  printf("\nThe numbers of interchanges are: %d",count);
  return 0;
}
