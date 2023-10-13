//Name:Nayandeep Deb
//Roll no. 23MA10036

#include <stdio.h>
#include <stdlib.h>

void findMax (int data[20][20], int m, int n); //declaration of the four functions
void findMin (int data[20][20], int m, int n);
void findMaxMin (int data[20][20], int m, int n);
void findMinMax (int data[20][20], int m, int n);

int main () {
  int data[20][20], m, n;
  printf("give number of rows(between 2 and 20): "); //taking user input for rows and columns
  scanf("%d", &m);
  printf("give number of columns(between 2 and 20): ");
  scanf("%d", &n);

  for (int i = 0; i < m; i++) { //randomizing data and printing the array
    for (int j = 0; j < n; j++) {
      data[i][j] = rand() % 11;
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  findMax(data, m, n); //Part A ,the four functions are used on the data array
  printf("\n");
  findMin(data, m, n); //Part B
  printf("\n");
  findMinMax(data, m, n); //Part C
  printf("\n");
  findMaxMin(data, m, n); //Part D
  return 0;
}

void findMax (int data[20][20], int m, int n) {//finds the 3x3 array with the max sum of numbers
  int max = 0, a, b;
  for (int i = 0; i < m-2; i++) {
    for (int j = 0; j < n-2; j++) { //loop to pick top left element of array, -2 is done so as not to use unfilled array elements
      int sum = 0;
      for ( int i1 = i; i1 < i+3; i1++) { //loop to take sum of all didts in the 3x3 array where data[i][j] will be the top left element
	for (int j1 = j; j1 < j+3; j1++) {
	  sum += data[i1][j1];
	}
      }
      if (sum > max) { //updating max sum, and storing the row and column of top left element to be used while printing submatrix
	max = sum;
	a = i;
	b = j;
      }
    }
  }

  printf("Max Submatrix:\n");
  for (int i = a; i < a+3; i++) { //3x3 submatrix is printed using the top left element as the starting point
    for (int j = b; j < b+3; j++) {
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("\nSUM = %d\n", max); //max sum is printed
}

void findMin (int data[20][20], int m, int n) { //similar precedure as findMax but here min is taken as a large number and the min is updated to those values of sum which are lower than it. here also the top left element is used as an anchor and its coordinates are stored for printing
  int min = 100, a, b;
  for (int i = 0; i < m-2; i++) {
    for (int j = 0; j < n-2; j++) {
      int sum = 0;
      for ( int i1 = i; i1 < i+3; i1++) {
	for (int j1 = j; j1 < j+3; j1++) {
	  sum += data[i1][j1];
	}
      }
      if (sum < min) {
	min = sum;
	a = i;
	b = j;
      }
    }
  }

  printf("Min Submatrix:\n");
  for (int i = a; i < a+3; i++) {
    for (int j = b; j < b+3; j++) {
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("\nMIN = %d\n", min);
}

void findMinMax (int data[20][20], int m, int n) {
  int mm = 20, a = 0, b = 0, b1; //minmax is set as a large number which is to be reduced
  for (int i = 0; i < m; i++) {
    int rm = 0; //rowmax is initially set to 0 and increased in loop
    for (int j = 0; j < n; j++) {
      if (rm < data[i][j]) { //if integer in array elemt is greater than rowmax, rowmax is updated to it and its column is stored for future use
	rm = data[i][j];
	b1 = j;
      }
    }
    if (rm < mm) { //if rowmax is lower than minmax, it is updated to rm and the coordinates are stored accordingly. this way the lowest rowmax is stored in minmax
      mm = rm;
      a = i;
      b = b1;
    }
  }

  printf("MinMax = %d, present in row %d, column %d\n", mm, a, b);
}

void findMaxMin (int data[20][20], int m, int n) { //same logic as findMinMax but here rowmin is set as a large number which is updated with the lowest element in the row and maxmin is initially stored as 0 which is updated whenever a rowmin is greater than it. This way the largest rowmin is stored in mm. the coordinates are stored in the same way as the find MinMax
  int mm = 0, a = 0, b = 0, b1;
  for (int i = 0; i < m; i++) {
    int rm = 20;
    for (int j = 0; j < n; j++) {
      if (rm > data[i][j]) {
	rm = data[i][j];
	b1 = j;
      }
    }
    if (rm > mm) {
      mm = rm;
      a = i;
      b = b1;
    }
  }

  printf("MaxMin = %d, present in row %d, column %d\n", mm, a, b);
}
