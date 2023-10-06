#include <stdio.h>
#include <stdlib.h>
int sum(int[],int,int);
int main(){
  int a [30];
  for(int i=0;i<30;i++){
    a[i]= rand()%11 +20;
    printf("%d ",a[i]);
  }
  printf("sum= %d",sum(a,30,0));
  return 0;
}
int sum(int arr[],int size,int sum1){
  if(size==0) return(arr[0]);
  else {sum1=sum1+ arr[size-1] + sum(arr,size-1,sum1);}
  return sum1;
}
