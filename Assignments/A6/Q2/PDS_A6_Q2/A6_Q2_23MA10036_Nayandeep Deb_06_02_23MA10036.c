//Name: Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int size); //declaring function sum and max here
int max(int arr[], int size);

int main () {
  int arr[30],size = 30;
  printf("Array Elements:\n");
  for (int i = 0; i < 30; i++) { //randomixing array values and displaying
    arr[i] = (rand()%11) + 20;
    printf("%d ", arr[i]);
  }
  printf("\n");

  int sum1 = sum(arr, size); //storing max and sum in an int variable
  int max1 = max(arr, size);
  printf("the sum of all integers in array is %d\n the max integer in the array is %d\n", sum1, max1); //printing the output
}

int sum(int arr[], int size) { //recursive function to add integers in array by adding the last value to the sum of the array (size - 1)
  if (size == 1) return arr[0];
  return arr[size - 1] + sum(arr, size -1);
}

int max(int arr[], int size) { //comparing the last and second last value and eliminating one therefore shortening the array and repeating the process till only 1 is left
  if (size == 1) return arr[0];
  if (arr[size - 1] >= arr [size - 2]) arr[size - 2] = arr[size - 1];
  max(arr, size -1);
}
