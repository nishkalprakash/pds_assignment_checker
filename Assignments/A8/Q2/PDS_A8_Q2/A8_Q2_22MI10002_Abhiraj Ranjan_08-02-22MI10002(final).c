/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 8
Question: 2
Description: Matrix Multiplication*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct{
int m;
int n;
int **ptr;
}matrix;
int **defineMatrix(int m, int n){
 int **matrix;
 matrix = (int **)calloc(m, sizeof(int *));
 for (int i = 0; i < m; i++)
 {
 matrix[i] = (int *)calloc(n, sizeof(int));
 }
 return matrix;
}
void readMatrix(int **matrix, int m, int n)
{
 for (int i = 0; i < m; i++)
 {
 for (int j = 0; j < n; j++)
 {
 scanf("%d", &matrix[i][j]);
 }
 }
}
void printMatrix(int **matrix,int m,int n){
 for (int i = 0; i < m; i++)
 {
 for (int j = 0; j < n; j++)
 {
 printf("%d ", matrix[i][j]);
 }
 printf("\n");
 }
}
int **multiply_matrix(int **matrix_a, int **matrix_b, int m, int n, int p){
 int **matrix, i = 0,j=0,k=0;
 matrix = defineMatrix(m,p);
 for (i = 0; i < m; i++) {
 for (j = 0; j < p; j++) {
 matrix[i][j] = 0;
 for (k = 0; k < n; k++) {
 matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
 }
 }
 }
 return matrix;
}
int main(){
matrix a,b,c;
int i;
printf("Enter the number of rows for Matrix A: ");
scanf("%d",&a.m);
printf("Enter the number of columns for Matrix A: ");
scanf("%d",&a.n);
printf("Enter the number of rows for Matrix B: ");
scanf("%d",&b.m);
printf("Enter the number of columns for Matrix B: ");
scanf("%d",&b.n);
a.ptr=(int**)malloc(a.m*sizeof(int*));
for(i=0;i<a.m;i++){
    a.ptr[i]=(int*)malloc(a.n*sizeof(int));
}
b.ptr=(int**)malloc(b.m*sizeof(int*));
for(i=0;i<b.m;i++){
    b.ptr[i]=(int*)malloc(b.n*sizeof(int));
}
printf("Enter the values for matrix A: \n");
readMatrix(a.ptr,a.m,a.n);
printf("Enter the values for matrix B: \n");
readMatrix(b.ptr,b.m,b.n);
printf("Matrices before multiplication:\n");
printf("Matrix A:\n");
printMatrix(a.ptr,a.m,a.n);
printf("Matrix B:\n");
printMatrix(b.ptr,b.m,b.n);
printf("Matrices after multiplication:\n");
printf("Matrix A:\n");
printMatrix(a.ptr,a.m,a.n);
printf("Matrix B:\n");
printMatrix(b.ptr,b.m,b.n);
printf("Resultant Matrix:\n");
c.ptr=multiply_matrix(a.ptr,b.ptr,a.m,a.n,b.n);
printMatrix(c.ptr,a.m,b.n);
return 0;
}
