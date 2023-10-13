// Roll no - 23NA10036
// Rishab Yadav

#include <stdio.h>
#include <stdlib.h>

void findMax(int data[][20], int m, int n);
void findMin(int data[][20], int m, int n);
void findMinMax(int data[][20], int m, int n);

int main(){

  int data[20][20];
  int m, n;

  printf("Enter value of m and n between 0 to 20:\n");
  scanf("%d %d", &m, &n);

  if(m >= 20 || m <= 2 || n >=20 || n <= 2){
    printf("Enter values between 0 to 20!\n");
    return 0;
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      data[i][j] = rand()%11;
    }
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      printf("%d ", data[i][j]);
    }
    printf("\n");
  }

  findMax(data, m, n);
  findMin(data, m, n);
  findMinMax(data, m, n);

  return 0;
}

void findMax(int data[][20], int m, int n){
  int sum = 0;
  int maxSum = 0;
  int maxSubMac[3][3];
  for(int i = 0; i < m-3; i++){
    int subMac[3][3];
    for(int j = i; j <= i + 2; j++){
      for(int k = i; k <= i + 2; k++){
	sum = sum + data[j][k];
	subMac[j][k] = data[j][k];
      }
    }
    if(sum > maxSum){
      maxSum = sum;
      for(int j = i; j <= i + 2; j++){
	for(int k = i; k <= i + 2; k++){
	  maxSubMac[i][j] = subMac[i][j];
	}
      }
    }
  }

  printf("The max submatrix is:\n");

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", maxSubMac[i][j]);
    }
    printf("\n");
  }
}

void findMin(int data[][20], int m, int n){
}

void findMinMax(int data[][20], int m, int n){
}
