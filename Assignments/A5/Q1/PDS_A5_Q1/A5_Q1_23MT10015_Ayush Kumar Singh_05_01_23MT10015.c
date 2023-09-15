#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[50];
  int temp[50];
  int n;
  scanf("%d", &n);
  for(int i=0; i<n;i++){
     arr[i] = ((rand()%91)+10);
  }
  for (int i=0; i<n;i++){
    printf("%d ", arr[i]);
  }

  for(int i =0; i<n/2;i++){
    if(arr[2*i]>arr[2*(i+1)]){
        temp[i] = arr[2*(i+1)];
        arr[2*(i+1)] = arr[2*i];
        arr[2*i] = temp[i];
    }

  }printf("\n");

    for(int j=0; j<n; j++){
      printf("%d ", arr[j]);}







   return 0;
}
