#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct {

    int n;

    int **m;    \\ Here we will define the 2D array using malloc in main fn

} Matrix;

void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}
  getMat(Matrix *M)
{

   int A[MAX][MAX];    // Initializing 2-D array
    int N;  // Size of the row/column
    int i, j;   // Loop Variables
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Enter Elements: ");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &A[i][j]);

    printf("Column Major: ");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            printf("%d ", A[j][i]);



} 
int main()

{

Matrix M1;

    \\ Ask user N

initMat(&M1,N)

  return 0;

}
