// Code creator: Subham Jain (jainofcsubham597@gmail.com)

#include <stdio.h>
#include <stdlib.h>

/*
Input format :-
5 4 6

1 2 2 1
1 3 4 1
3 4 3 2
5 3 2 6
2 1 1 4

1 3 2 3 2 1
3 4 1 4 5 6
6 2 1 6 1 2
5 4 6 4 1 2

*/

/*
   @details : Takes two integer arguments 'm' and 'n' and defines a 2D matrix of size m x n.
   @return  : Returns the pointer to the 2D array.
*/
int **defineMatrix(int m, int n){
   int **matrix;
   matrix = (int **)calloc(m, sizeof(int *));
   for (int i = 0; i < m; i++)
   {
       matrix[i] = (int *)calloc(n, sizeof(int));
   }
   return matrix;
}

/*
   @details : Takes one pointer to 2D array and two integer arguments and reads the 2D array from standard input.
   @return  : No return value
*/
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

/*
   @details : Takes one pointer to 2D array and two integer arguments and prints the 2D array to standard output.
   @return  : No return value
*/
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

/*
   @details : Takes two pointers to 2D arrays and three integer arguments and swaps the largest sub-matrix.
   @return  : No return value
*/
void swap_sub_matrix(int **matrix_a, int **matrix_b, int m, int n, int p){
   int sub_matrix_m = 0, sub_matrix_n = 0;
   if(m < n){
       sub_matrix_m = m;
   }else{
       sub_matrix_m = n;
   }

   if(n < p){
       sub_matrix_n = n;
   }else{
       sub_matrix_n = p;
   }

   int temp = 0;
   for(int i=0;i<sub_matrix_m;i++){
       for(int j=0;j<sub_matrix_n;j++){
           temp = matrix_a[i][j];
           matrix_a[i][j] =  matrix_b[i][j];
           matrix_b[i][j] = temp;
       }
   }
}

/*
   @details : Takes two pointers to 2D arrays and three integer arguments and multiplies the 2D arrays.
   @return  : Pointer to the output array.
*/
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
   return  matrix;
}

/*
   @details : Main function
   @return  : Returns 0 on successful execution.
*/
int main()
{
   int m = 0, n = 0, p = 0;
   scanf("%d %d %d", &m, &n, &p);
   int **matrix_a, **matrix_b, **matrix_c;

   matrix_a = defineMatrix(m,n);
   matrix_b = defineMatrix(n,p);

   // Reading matrices
   readMatrix(matrix_a,m,n);
   readMatrix(matrix_b,n,p);

   // Swap largest sub-matrix
   swap_sub_matrix(matrix_a,matrix_b,m,n,p);

   // Multiply matrices
   matrix_c = multiply_matrix(matrix_a,matrix_b,m,n,p);

   printf("Matrix A:- \n");
   printMatrix(matrix_a,m,n);
   printf("\n");
   printf("Matrix B:- \n");
   printMatrix(matrix_b,n,p);
   printf("\n");  
   printf("Matrix C:- \n");
   printMatrix(matrix_c,m,p);
   printf("\n");

   // Free the dynamically allocated memory.
   free(matrix_a);
   free(matrix_b);
   free(matrix_c);

   return 0;
}
