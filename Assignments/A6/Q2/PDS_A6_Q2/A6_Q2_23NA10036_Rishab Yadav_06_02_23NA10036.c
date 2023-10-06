// Rishab Yadav
// Roll number - 23NA10036

#include <stdio.h>
#include <stdlib.h>

int sum();
int max();
int reverse();

int SUM, MAX;

int main(){
  int arr[30];

  for(int i = 0; i < 30; i++){
    arr[i] = rand()%11 + 20;
  }

  printf("The original array:\n");

  for(int i = 0; i < 30; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  sum(&arr, 30, &SUM);
  max(&arr, 30, &MAX);
  reverse(&arr, 30, 0, 29);

  printf("The sum is: %d\n", SUM);
  printf("The max is: %d\n", MAX);
  printf("The reversed array is:\n");

  for(int i = 0; i < 30; i++){
    printf("arr[%d] = %d, ", i, arr[i]);
  }

  printf("\n");

  return 0;
  
}

int sum(int *arr, int size){
  SUM = 0;
  for(int i = 0; i < size; i++){
    SUM = SUM + arr[i];
  }
  return SUM;
}

int max(int *arr, int size){
  MAX = 0;
  for(int i = 0; i < size; i++){
    if(arr[i] > MAX){
      MAX = arr[i];
    }
  }
  return MAX;
}

int reverse(int *arr, int size, int first, int last){
  for(int i = 0; i < size / 2; i++){
    int temp;
    temp  = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 -i] = temp;
  }

  return arr[size];
}
