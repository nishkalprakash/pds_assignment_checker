#include<stdio.h>
#include<stdlib.h>
int sum(int a[],int i){
  int sum1;
  if(i==0){
    return a[i];
  }
  sum1=a[i-1]+sum(a,i-1);
  return sum1;
}

int max(int a[],int i){
  int max1;
  if(i==0){
    return a[i];
  }
  if(a[i]<a[i-1]){
    max1=max(a,i-1);
  }
  else{
    max1=a[i];
  }
  return max1;
}

void reverse(int a[],int i,int j){
  if(j==0){
    return;
  }
  a[i]=a[j];
  reverse(a,i+1,j-1);
}

int main(){
  int A[30],i,sum2,max2;
  for(i=0;i<30;i++){
    A[i]=(rand()%(30-20+2)+20);
  }
  printf("The values stored in the array are:\n");
  for(i=0;i<30;i++){
    printf("%d,",A[i]);
  }
  sum2=sum(A,30);
  max2=max(A,30);
  printf("The sum of values stored in the array is: %d\n",sum2);
  printf("The max value in the array is: %d\n",max2);
  reverse(A,0,29);
  printf("The values in the array after reversing becomes:\n");
  for(i=0;i<30;i++){
    printf("%d,",A[i]);
  }
  return 0;
}
