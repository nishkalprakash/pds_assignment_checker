//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

void findMax(int data[][20], int m, int n);
void findMin(int data[][20], int m, int n);
void findMinMax(int data[][20], int m, int n);
void findMaxMin(int data[][20], int m, int n);


int main(){
  int data[20][20];
  int m,n;
  while(1){   //Data validation for m
    printf("Enter value of m (2<m<20): ");
    scanf("%d", &m);
    if (m>2 && m<20) break;
    else printf("Wrong input. Enter again.\n");
  }
  while(1){   //Data validation for n
    printf("Enter value of n (2<n<20): ");
    scanf("%d", &n);
    if (n>2 && n<20) break;
    else printf("Wrong input. Enter again.\n");
  }
  for (int i=0; i<m; i++){  //Data filling
    for (int j=0; j<n; j++){
      data[i][j]=rand()%11;
    }
  }
  printf("Data:\n");
  for (int i=0; i<m; i++){  //Data printing
    for (int j=0; j<n; j++){
      printf("%2d\t", data[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  findMax(data, m, n);
  findMin(data, m, n);
  findMinMax(data, m, n);
  findMaxMin(data, m, n);
  return 0;
}

void findMax(int data[][20], int m, int n){
  int maxi=0, maxj=0, sum=0, maxsum=0;
  printf("Max submatrix: \n");
  for (int i=0; i<m-2; i++){
    for (int j=0; j<n-2; j++){
      sum = data[i][j]+ data[i][j+1]+ data[i][j+2]+ data[i+1][j]+ data[i+1][j+1]+ data[i+1][j+2]+ data[i+2][j]+ data[i+2][j+1]+ data[i+2][j+2];
      if (sum>=maxsum){
	maxsum=sum;
	maxi=i;
	maxj=j;
      }
    }
  }
  for (int i=maxi; i<maxi+3; i++){  //Data printing
    for (int j=maxj; j<maxj+3; j++){
      printf("%2d\t", data[i][j]);
    }
    printf("\n");
  }
  printf("Sum=%d\n", maxsum);
  printf("\n");	    
  return;
}

void findMin(int data[][20], int m, int n){
  int mini=0, minj=0, sum=0, minsum=4000;
  printf("Min submatrix: \n");
  for (int i=0; i<m-2; i++){
    for (int j=0; j<n-2; j++){
      sum = data[i][j]+ data[i][j+1]+ data[i][j+2]+ data[i+1][j]+ data[i+1][j+1]+ data[i+1][j+2]+ data[i+2][j]+ data[i+2][j+1]+ data[i+2][j+2];
      if (sum<=minsum){
	minsum=sum;
	mini=i;
	minj=j;
      }
    }
  }
  for (int i=mini; i<mini+3; i++){  //Data printing
    for (int j=minj; j<minj+3; j++){
      printf("%2d\t", data[i][j]);
    }
    printf("\n");
  }
  printf("Sum=%d\n", minsum);
  printf("\n");	    
  return;
}

void findMinMax(int data[][20], int m, int n){
  int rowmax=0, minmax=10,minmaxi, minmaxj,  maxj, rowsmaxs[20], rowmaxj[20];
  for (int i=0; i<m; i++){ //Finding maximum of each row
    rowmax=0;
    for (int j=0; j<n; j++){
      if (data[i][j]>=rowmax){
	rowmax=data[i][j];
	maxj=j;
      }
    }
    rowsmaxs[i]=rowmax;
    rowmaxj[i]=maxj;
  }
  for (int i=0; i<m; i++){
    if (rowsmaxs[i]<=minmax){
      minmax=rowsmaxs[i];
      minmaxj=rowmaxj[i];
      minmaxi=i;
    }
  }
  printf("minMax=%d, present in row %d, column %d\n\n", minmax, minmaxi, minmaxj);
  return;
}

void findMaxMin(int data[][20], int m, int n){
  int rowmin=10, maxmin=0,maxmini, maxminj,  minj, rowsmins[20], rowminj[20];
  for (int i=0; i<m; i++){ //Finding minimum of each row
    rowmin=10;
    for (int j=0; j<n; j++){
      if (data[i][j]<=rowmin){
	rowmin=data[i][j];
	minj=j;
      }
    }
    rowsmins[i]=rowmin;
    rowminj[i]=minj;
  }
  for (int i=0; i<m; i++){
    if (rowsmins[i]>=maxmin){
      maxmin=rowsmins[i];
      maxminj=rowminj[i];
      maxmini=i;
    }
  }
  printf("maxMin=%d, present in row %d, column %d\n\n", maxmin, maxmini, maxminj);
  return;
}


      
