//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int nmax=0;
int sum(int arr[], int size);
int max(int arr[], int size);
int reverse(int arr[], int start, int end);

int main(){
  int arr[30];
  for (int i=0; i<30; i++){
    arr[i]=rand()%11+20;
  }
  for (int i=0; i<30; i++){
    printf("%d\t", arr[i]);
  }
  printf("\n\n");
  printf("Sum: %d\n", sum(arr, 30));
  printf("Max: %d\n", max(arr, 30));
  reverse(arr,0,29);
  printf("Reversed array: ");
  for (int i=0; i<30; i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");
  return 0;
}

int sum(int arr[], int size){
  if (size==1) return arr[size-1];
  else return arr[size-1]+sum(arr, size-1);
}

int max(int arr[], int size){
  if (arr[size-1]>nmax){
      nmax=arr[size-1];
  }
  if (size==1) return nmax;
  else return max(arr, size-1);
}

int reverse(int arr[], int start, int end){
  if (end-start<=0) return 0;
  int temp;
  temp=arr[start];
  arr[start]=arr[end];
  arr[end]=temp;
  reverse(arr, start+1, end-1);
}
