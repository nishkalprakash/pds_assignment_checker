//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* The function takes in the array and its size as input and returns the sum by recursively calling itself for the same array with size reduced by 1 and added the last element. Base case is when size of array is 0 sum will be 0  */
int sum(int a[], int n) {
  if (n == 0) return 0;
  return sum(a, n-1) + a[n-1];
}

/* The function takes in the array and its size as input and returns the max value by recursively calling itself for the same array with size reduced by 1 and checking whether the last element is bigger than max of remaining array and returning the larger value. Base case is n = 1 where the max value is the only element remaining */
int max(int a[], int n) {
  if (n == 1) return a[0];
  
  int mx = max(a, n-1);
  if (mx < a[n-1]) return a[n-1];
  else return mx;
}

/* The reverse function takes in the array and the left and right indice of the portion we want to reverse as input. The function first exchanges the values at the leftmost and right most point and then recursively calls itself to reverse the remaining array that is from l+1 to r-1. Base case is when left indice is no longer less than right indice which means it is either equal or left is greater therefore we dont need to do anything anymore and return*/
void reverse(int a[], int l, int r) {
  if (!(l < r)) return;

  // swaps a[l] and a[r]
  int temp = a[l];
  a[l] = a[r];
  a[r] = temp;

  reverse(a, l+1, r-1);
}

int main() {
  srand(time(0));

  /* Declare the array of size 30, and put in random numbers from 20 to 30
  in them. rand() % 11 will give us elements in [0, 10] therefore that + 20
  will give us [20, 30] */
  int a[30];
  printf("Array : [");
  for (int i = 0; i < 30; i++) {
    a[i] = rand() % 11 + 20;
    printf("%d, ", a[i]);
  }
  printf("\b\b]\n");

  /* Prints the values returned by sum and max */
  printf("Sum = %d\n", sum(a, 30));
  printf("Max = %d\n", max(a, 30));

  /* Reverses the array and prints the reversed array */
  reverse(a, 0, 29);
  printf("Reversed Array : [");
  for (int i = 0; i < 30; i++)
    printf("%d, ", a[i]);
  printf("\b\b]\n");
}
