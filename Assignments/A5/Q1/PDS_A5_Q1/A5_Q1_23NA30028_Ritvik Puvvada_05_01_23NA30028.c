//Roll No: 23NA30028
//Name: Ritvik Puvvada

#include <stdio.h>
#include <stdlib.h>

int main(){
  int A[50],i,count=0,n,temp;
  printf("How many numbers do you want to enter?");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    A[i]= rand()%91+10;
  }
  printf("The array is:");
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  printf("\n");
  for(i=0;i<n-2;i=i+2){
    if(A[i]>A[i+2]){
      temp=A[i];
      A[i]=A[i+2];
      A[i+2]=temp;
      count++;
    }
  }
  printf("The new array is:");
  for(i=0;i<n;i++){
    printf("%d ",A[i]);
  }
  printf("number of interchanges = %d\n",count);
  return 0;
}


