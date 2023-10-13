
//roll- 23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n;
  int arr[50];
  printf("enter the number of numbers to be printed");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("%d\n",arr[i]=10+rand()%41);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
	if(arr[i] +arr[j]+arr[k]==60){
	  printf("indices are %d %d %d and triplets are %d %d %d \n",i,j,k,arr[i],arr[j],arr[k]);
	}
      }
    }
  }return 0;
}
  
