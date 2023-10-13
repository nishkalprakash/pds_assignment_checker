//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[20][20], int m, int n);
int findMin(int arr[20][20], int m, int n);
int findMinMax(int arr[20][20], int m, int n);
int findMaxMin(int arr[20][20], int m, int n);

int main(){
  int data[20][20];
  int m, n;
  printf("Enter the size of the matrix m x n (as m n): ");
  scanf("%d %d", &m, &n);

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      data[i][j] = rand()%11;
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
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

int findMax(int arr[20][20], int m, int n){
  int max = 0, sum = 0, xPos = 0, yPos = 0;
  
  for(int xLoc = 0; xLoc < m-2; xLoc++){
    for(int yLoc = 0; yLoc < n-2; yLoc++){
      sum = 0;
      for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
	  sum += arr[xLoc+i][yLoc+j];
	}
      }
      if(sum > max){
	max = sum;
	xPos = xLoc;
	yPos = yLoc;
      }
    }
  }
  printf("Max Submatrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%2d ", arr[xPos+i][yPos+j]);
    }
    printf("\n");
  }
  printf("Sum = %d\n\n", max);
}

int findMin(int arr[20][20], int m, int n){
  int min = 91, sum = 0, xPos = 0, yPos = 0;
  
  for(int xLoc = 0; xLoc < m-2; xLoc++){
    for(int yLoc = 0; yLoc < n-2; yLoc++){
      sum = 0;
      for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
	  sum += arr[xLoc+i][yLoc+j];
	}
      }
      if(sum < min){
	min = sum;
	xPos = xLoc;
	yPos = yLoc;
      }
    }
  }
  printf("Min Submatrix:\n");
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%2d ", arr[xPos+i][yPos+j]);
    }
    printf("\n");
  }
  printf("Sum = %d\n\n", min);
}

int findMinMax(int arr[20][20], int m, int n){
  int maxes[20] = {0}, xmax[20] = {0}, ymax[20] = {0};
  int minMax = 11, mMx = 0, mMy = 0;

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][j] > maxes[i]){
	maxes[i] = arr[i][j];
	xmax[i] = i;
	ymax[i] = j;
      }
    }
  }

  for(int i = 0; i < m; i++){
    if(maxes[i] < minMax){
      minMax = maxes[i];
      mMx = xmax[i];
      mMy = ymax[i];
    }
  }
  printf("minMax = %d. Present at row = %d, column = %d\n", minMax, mMx, mMy);
}

int findMaxMin(int arr[20][20], int m, int n){
  int mins[20] = {0}, xmin[20] = {0}, ymin[20] = {0};
  int maxMin = 0, mMx = 0, mMy = 0;

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(arr[i][j] < mins[i] || j == 0){
	mins[i] = arr[i][j];
	xmin[i] = i;
	ymin[i] = j;
      }
    }
  }

  for(int i = 0; i < m; i++){
    if(mins[i] > maxMin){
      maxMin = mins[i];
      mMx = xmin[i];
      mMy = ymin[i];
    }
  }
  printf("minMax = %d. Present at row = %d, column = %d\n", maxMin, mMx, mMy);
}
