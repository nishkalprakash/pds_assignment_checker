//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

#define size 30

int sum(int arr[], int n);
int max(int arr[], int n);
int reverse(int arr[], int s, int e);

int main(){
  int arr[size];

  for(int i = 0; i < size; i++){
    arr[i] = rand()%11 + 20;
  }

  printf("Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");

  printf("Sum = %d\n", sum(arr, size));
  printf("Max = %d\n", max(arr, size));

  reverse(arr, 0, size-1);
  printf("Reversed Array = {");
  for(int i = 0; i < size; i++){
    printf(" %d,", arr[i]);
  }
  printf("\b}\n");
}

int sum(int arr[], int n){
  if(n-1 == 0){
    return arr[0];
  }
  
  return arr[n-1]+sum(arr, n-1);
}

int max(int arr[], int n){
  static int maxim = 0;
  if(n-1==0){
    return maxim;
  }
  if(maxim < arr[n-1]){
    maxim = arr[n-1];
  }
  max(arr, n-1);
}

int reverse(int arr[], int s, int e){
  if(s >= e){
    return arr[s];
  }
  int temp = arr[s];
  arr[s] = arr[e];
  arr[e] = temp;

  reverse(arr, s+1, e-1);
}
