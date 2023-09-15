#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i,c=0;
  int arr[50];
  printf("enter the number of values : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    arr[i] = rand() %41+10;
    printf("the elements of array are : %d\n",arr[i]);
  }
  for(int j=1;j>i&&j<n;j++){
    for(int k=1;k>i&&k<n;k++){
      if(arr[i]+arr[j]+arr[k]==arr[60]){
	printf("the triplets are %d %d %d",i,j,k);
	c++;
      }
    }
  }
  if(c==0){
    printf("there are no triplets in the given numbers");
  }
  return 0;
}
