//Name- Asad Ali Jaffrey
//Roll No.- 23CH30007

#include<stdio.h>
#include<stdlib.h>

void findMax(int a[][20], int, int);
void findMin(int a[][20], int, int);
void findMinMax(int a[][20], int, int);
void findMaxMin(int a[][20], int, int);

int main() {

  int m, n;

  int data[20][20];

  printf("Enter the value of m and n respectively with a space ");
  scanf("%d %d",&m, &n);

  if (((m>2)&&(m<20))&&((n>2)&&(n<20))) {

    for (int i = 0; i<m; i++) {      //for storing random values
      for (int j = 0; j<n; j++) {
	data[i][j] = rand()%11;
      }
    }
    

    for (int i = 0; i<m; i++) {      //for printing the array
      for (int j = 0; j<n; j++) {
	printf("%d  ", data[i][j]);
      }
      printf("\n");
    }

    findMax(data, m, n);
    findMin(data, m, n);
    findMinMax(data, m, n);
    findMaxMin(data, m, n);      
    
  }

  else {
    printf("Wrong Input!!!");    //wrong input
  }
  

  return 0;
}


void findMax(int a[][20], int m, int n) {

  int max = 0, sum = 0, maxstart_row, maxstart_column;

  for(int i = 0; i<m-2; i++) {
    for(int j = 0; j<n-2; j++) {
      sum = 0;
      for(int k = j; k<j+3; k++) {
	sum = sum + a[i][k] + a[i+1][k] + a[i+2][k];
      }

      if (sum>max) {
	max = sum;
	maxstart_row = i;                  //max_start stores the (0x0) element of the subarray
	maxstart_column = j;
      }
      
    }
  }

  printf("\n");


  for (int i = maxstart_row; i<=maxstart_row + 2; i++) {
    for (int j = maxstart_column; j<=maxstart_column + 2; j++) {
      printf("%d  ", a[i][j]);
    }
    printf("\n");
  }

  printf("The sum is %d\n", max);

}

void findMin(int a[][20], int m, int n) {

  int min = 999, sum = 0, minstart_row, minstart_column;

  for(int i = 0; i<m-2; i++) {
    for(int j = 0; j<n-2; j++) {
      sum = 0;
      for(int k = j; k<j+3; k++) {
	sum = sum + a[i][k] + a[i+1][k] + a[i+2][k];
      }

      if (sum<min) {
	min = sum;
	minstart_row = i;                         //min_start stores the (0x0) element of the subarray
	minstart_column = j;
      }
      
    }
  }

  printf("\n");


  for (int i = minstart_row; i<=minstart_row + 2; i++) {
    for (int j = minstart_column; j<=minstart_column + 2; j++) {
      printf("%d  ", a[i][j]);
    }
    printf("\n");
  }

  printf("The sum is %d\n", min);

}


void findMinMax(int a[][20], int m, int n) {


  int maxrow = 0, minmax = 999, minmax_r, minmax_c;

  for (int i = 0; i<m; i++) {
    int j;
    int k;
    maxrow = 0;
    for (j = 0; j<n; j++){
      if (a[i][j]>maxrow) {
	maxrow = a[i][j];
	k = j;                     //for storing that j as it is getting changed in this loop
      }
    }

    if (maxrow<minmax) {
      minmax = maxrow;
      minmax_r = i;
      minmax_c = k; 
    }
  }

  printf("\nminmax = %d, present in row %d, column %d\n", minmax, minmax_r, minmax_c);   
}


void findMaxMin(int a[][20], int m, int n) {


  int minrow = 999, maxmin = 0, maxmin_r, maxmin_c;

  for (int i = 0; i<m; i++) {
    int j;
    int k;
    minrow = 999;
    for (j = 0; j<n; j++){
      if (a[i][j]<minrow) {
	minrow = a[i][j];
	k = j;                     //for storing that j as it is getting changed in this loop
      }
    }

    if (minrow>maxmin) {
      maxmin = minrow;
      maxmin_r = i;
      maxmin_c = k; 
    }
  }

  printf("\nmaxmin = %d, present in row %d, column %d\n", maxmin, maxmin_r, maxmin_c);   
}
