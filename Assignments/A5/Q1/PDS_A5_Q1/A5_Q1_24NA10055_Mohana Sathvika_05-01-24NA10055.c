#include<stdio.h>
#define N 100
int main(){
  printf("enter the size of array:"); 
  int n;
  scanf("%d", &n);
  if(n<=N){
        int arr[n];
        for(int i=0;i<n;++i){
                 scanf("%d", &arr[i]);
                 }
                
           int b = 0;
          for(int i = 0; i<n; i++){
          	if(arr[i] < 0){
          		int x = i;
          		while(b != x){
          			int temp = arr[x];
          			arr[x] = arr[x-1];
          			arr[x-1] = temp;
          			x--;
          		}
          		b++;
          	}
          } 
          for(int i = 0; i < n; i++){
          	printf("%d ", arr[i]);
          }
          }
  else{
    printf("error: n>100");
    }
  }
