#include<stdio.h>
#include<math.h>
/*Nmae -Sumit Kumar
Section-2
Roll no-22CS30056
DESCRIPTION-matrix*/
typedef struct matrix{
    int **m;
}matrix;
int **def(int m, int n){
     int **matrix;
     matrix = (int **)calloc(m, sizeof(int *));
     for (int i = 0; i < m; i++){
     matrix[i] = (int *)calloc(n, sizeof(int));
   }
     return matrix;
}
void read(int **matrix, int m, int n){
   for (int i = 0; i < m; i++){
       for (int j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
      }
   }
}
void print(int **matrix,int m,int n){
   for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      printf("%d \t", matrix[i][j]);
   }
    printf("\n");
   }
}
int **multiply(int **matrix_a, int **matrix_b, int m, int n, int p){
    int **matrix, i = 0,j=0,k=0;
    matrix = def(m,p);
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
    int a,b,c,d;
    printf("Enter the rows of matrix A:");
    scanf("%d",&a);
    printf("\nEnter the columns of matrix A:");
    scanf("%d",&b);
    printf("\nEnter the rows of matrix B:");
    scanf("%d",&c);
    printf("\nEnter the columns of matrix B:");
    scanf("%d",&d);
    matrix matrix_a, matrix_b,matrix_c;
    matrix_a.m = def(a,b);
    matrix_b.m = def(c,d);

    printf("\nEnter the values of matrix A:\n");
    read(matrix_a.m,a,b);
    printf("\nEnter the values of matrix B:\n");
    read(matrix_b.m,c,d);
    printf("\nMatrix before multiplication:\n");
    printf("Matrix A:\n");
    print(matrix_a.m,a,b);
    printf("\n");
    printf("Matrix B:\n");
    print(matrix_b.m,c,d);
    printf("\n");
    if(b==c){
        matrix_c.m = multiply(matrix_a.m,matrix_b.m,a,b,d);
         printf("\nMatrix after multiplication:\n");
         printf("Matrix A:\n");
         print(matrix_a.m,a,b);
         printf("\n");
         printf("Matrix B:\n");
         print(matrix_b.m,c,d);
         printf("\n");
        printf(" Resultant Matrix :\n");
        print(matrix_c.m,a,d);
    }
    else printf("\nError:Invalid matrix sizes for multiplication!");
 }
