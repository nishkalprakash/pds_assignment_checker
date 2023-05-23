/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 7
* Description :1
*/
#include<stdio.h>

int main(){
  int m,n,p;
  printf("Enter m,n,p respectively");
  scanf("%d",&m);
  scanf("%d",&n);
  scanf("%d",&p);

  int** A = (int **) calloc(m, sizeof(int*));
   for (int i = 0; i < m; i++)
     A[i] = (int *) calloc(n, sizeof(int));

  int** B = (int **) calloc(n, sizeof(int*));
   for (int i = 0; i < n; i++)
     B[i] = (int *) calloc(p, sizeof(int));

  int** C = (int **) calloc(m, sizeof(int*));
   for (int i = 0; i < m; i++)
     C[i] = (int *) calloc(p, sizeof(int));

  printf("Enter values of elements of A\n");
   for(int j=0;j<m;j++){
      for(int k=0;k<n;k++){
        printf("enter element at th e indices (%d,%d): ",j,k);
        scanf("%d",&A[j][k]);
      }
  }

  printf("Enter values of elements of B\n");
   for(int j=0;j<n;j++){
      for(int k=0;k<p;k++){
        printf("enter element at the indices (%d,%d): ",j,k);
        scanf("%d",&B[j][k]);
      }
  }

  if(m<n && n<p){
  int num1,num2;
  for(int i=0;i<m;i++){
     for(int j=0;j<n;j++)
       {
        num1=A[i][j];
        num2=B[i][j];
        A[i][j]=num2;
        B[i][j]=num1;

    }
  }

  }

  if(m<n && n>p){
  int num1,num2;
  for(int i=0;i<m;i++){
     for(int j=0;j<p;j++)
       {
        num1=A[i][j];
        num2=B[i][j];
        A[i][j]=num2;
        B[i][j]=num1;

    }
  }

  }

  if(m>n && n>p){
  int num1,num2;
  for(int i=0;i<n;i++){
     for(int j=0;j<p;j++)
       {
        num1=A[i][j];
        num2=B[i][j];
        A[i][j]=num2;
        B[i][j]=num1;

    }
  }

  }

  if(m>n && n<p){
  int num1,num2;
  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++)
       {
        num1=A[i][j];
        num2=B[i][j];
        A[i][j]=num2;
        B[i][j]=num1;

    }
  }

  }

   printf("new matrix A\n");
   for(int j=0;j<m;j++){
      for(int k=0;k<n;k++){
        printf("element at the indices (%d,%d) :%d ",A[j][k]);
      }
  }

  printf("new matrix B\n");
  for(int j=0;j<n;j++){
      for(int k=0;k<p;k++){
        printf("element at the indices (%d,%d) :%d ",B[j][k]);
      }
  }





return 0;
}
