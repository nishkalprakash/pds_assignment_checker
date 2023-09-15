//roll 23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>

int main(){
  int arr[50];
  int n;
  printf("enter the number of numbers\n ");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("the numbers are %d\n", arr[i]= 10+rand()%90);
  }
    for(int i=0;i<(n/2) ;i++){
      if(arr[2*i]>arr[2*i+2]){
	  int temp;
	  temp=arr[2*i];
	  arr[2*i]=arr[2*i+2];
	  arr[2*i+2]=temp;
      }
    }
    for(int i=0;i<n;i++){
      printf("the new pattern is %d\n", arr[i]);
    }
      return 0;
    }
