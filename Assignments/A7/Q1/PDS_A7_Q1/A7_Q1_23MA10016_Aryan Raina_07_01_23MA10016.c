//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* This function manually checks sum for all 3x3 submatrices and whenever it arrives at the new current max sum it updates msum im jm such that msum = sum, im, jm = top left indice of that submatrix*/
void findMax(int data[20][20], int m, int n) {
  // msum is initialized to -1 because sum of any submatrix will be more than that
  int msum = -1, im, jm;
  
  for (int i = 0; i < m-2; i++) {
    for (int j = 0; j < n-2; j++) {
      int sum = 0;
      for (int a = i; a < i+3; a++)
	for (int b = j; b < j+3; b++)
	  sum += data[a][b];

      if (sum > msum) {
	msum = sum;
	im = i; jm = j;
      }
    }
  }

  // prints the submatrix and sum
  printf("Max Submatrix :\n");
  for (int i = im; i < im+3; i++) {
    for (int j = jm; j < jm+3; j++) {
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("Sum = %d\n\n", msum);
}

//---------------------------------------------------------------------

/* This function manually checks sum for all 3x3 submatrices and whenever it arrives at the new current min sum it updates msum im jm such that msum = sum, im, jm = top left indice of that submatrix*/
void findMin(int data[20][20], int m, int n) {
  // msum is initialized to a huge number so that it updates after we get our first sum
  int msum = 1e9+7, im, jm;
  
  for (int i = 0; i < m-2; i++) {
    for (int j = 0; j < n-2; j++) {
      int sum = 0;
      for (int a = i; a < i+3; a++)
	for (int b = j; b < j+3; b++)
	  sum += data[a][b];

      if (sum < msum) {
	msum = sum;
	im = i; jm = j;
      }
    }
  }

  printf("Min Submatrix :\n");
  for (int i = im; i < im+3; i++) {
    for (int j = jm; j < jm+3; j++) {
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("Sum = %d\n\n", msum);
}

//------------------------------------------------------------------------

/* Here we loop through a row get its max and the indice of the max element in that row. Then we check if minMax > the current row's max if it is then we update the minMax with current row's max and update the indices of minMax*/
void findMinMax(int data[20][20], int m, int n) {
  // minMax is initialized to 1e9+7 because any element in the array is less than that so it will get changed for sure
  int minMax = 1e9+7, im, jm;

  for (int i = 0; i < m; i++) {
    // mx is intialized to -1 because all elements in array are more than that so it will update for sure
    int mx = -1, jtemp;
    
    // we find the max in row i and update jtemp to its indice
    for (int j = 0; j < n; j++) 
      if (mx < data[i][j]) mx = data[i][jtemp = j];

    if (mx < minMax) {
      minMax = mx;
      im = i; jm = jtemp;
    }
  }

  printf("minMax = %d, present in row %d, column %d\n\n", minMax, im, jm);
}

//------------------------------------------------------------------------

/* Same logic as findMinMax */
void findMaxMin(int data[20][20], int m, int n) {
  int maxMin = -1, im, jm;

  for (int i = 0; i < m; i++) {
    int mn = 1e9+7, jtemp;
    for (int j = 0; j < n; j++) 
      if (mn > data[i][j]) mn = data[i][jtemp = j];

    if (mn > maxMin) {
      maxMin = mn;
      im = i; jm = jtemp;
    }
  }

  printf("maxMin = %d, present in row %d, column %d\n\n", maxMin, im, jm);
}

//--------------------------------------------------------------------

int main() {
  srand(time(0));
  
  int data[20][20];
  int m, n;
  printf("Enter m and n (2 < m,n < 20) : ");
  scanf("%d %d", &m, &n);
  if (!(2 < m && m < 20 && 2 < n && n < 20)) {
    printf("Invalid Input!\n");
    return 0;
  }

  printf("Array : \n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) { 
      data[i][j] = rand()%11;
      printf("%2d ", data[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  findMax(data, m, n);
  findMin(data, m, n);
  findMinMax(data, m, n);
  findMaxMin(data, m, n);
}

 
