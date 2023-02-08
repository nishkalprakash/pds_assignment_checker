//Class test 2
//Name:Sanika Kadam
//Roll no:22IM10020

//Question 2


#include<stdio.h>
#include<stdlib.h>
#define MAX 100

typedef struct{
          int R;
          int C;
          int **M;
         }matrix;

void initMat(matrix *mat, int R,int C)
{
    mat->R = R;
    mat->C = C;
    mat->M = (int **)malloc(mat->R * sizeof(int *));
    for (int i = 0; i < mat->R; i++)
        mat->M[i] = (int *)malloc(mat->R * sizeof(int));
}

//Function to print matrix

void printMat(matrix *mat)
{
    printf("Matrix: ");
    for (int i = 0; i < mat->R; i++)
    {
         printf("\n");
         for (int j = 0; j < mat->C; j++)
         {
            printf("%d ", mat->M[i][j]);
         }
    }
}
//Function to get and print elements of matrix

void getMat(matrix *mat,int m, int n)
{
    initMat(mat, m,n);
    printf("\nEnter %d elements: ", m * n);
    for (int i = 0; i < mat->R; i++)
        for (int j = 0; j < mat->C; j++)
            scanf("%d", &mat->M[i][j]);
    printMat(mat);
}




int main()
{
  int M,N;
  matrix mat;

  printf("Enter M: ");
  scanf("%d",&M);

  printf("Enter N: ");
  scanf("%d",&N);
  
  getMat(&mat,M,N);
  printf("\n");
  
  

return 0;
}

