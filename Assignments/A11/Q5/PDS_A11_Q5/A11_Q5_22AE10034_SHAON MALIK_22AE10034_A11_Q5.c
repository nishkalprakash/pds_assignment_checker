#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int n;
    int **m;    // Here we will define the 2D array using malloc in main fn

} Matrix;

void initMat(Matrix *M,int N)

{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));
}


void getMat(Matrix *M){
      for (int i = 0; i < M->n; i++)
      	for (int j = 0; j < M->n; j++)
      		scanf("%d",&M->m[i][j]);

}

void zeroMat(Matrix *M){
   for (int i = 0; i < M->n; i++)
      	for (int j = 0; j < M->n; j++)
      		M->m[i][j]=0;

}

void printMat(Matrix* M){
      for (int i = 0; i < M->n; i++){
      	for (int j = 0; j < M->n; j++)
      		printf("%d ",M->m[i][j]);
      	printf("\n");
      }

}


int main()

{
Matrix M1,M2,M3;
int N;
printf("enter N:");
scanf("%d",&N);
initMat(&M1,N);
initMat(&M2,N);
initMat(&M3,N);
printf("enter %d elements for M1:",N*N);
getMat(&M1);
printf("enter %d elements for M2:",N*N);
getMat(&M2);
zeroMat(&M3);
   

}