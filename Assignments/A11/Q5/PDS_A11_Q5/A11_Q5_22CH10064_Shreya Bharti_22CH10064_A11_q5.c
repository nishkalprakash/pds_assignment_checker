#include <stdio.h>
#include <stdlib.h>


typedef struct {
int n;
int **m;
}matrix;


void mat(matrix* M, int N){
M->n=N;
M->m = (int**)malloc(M->n * sizeof(int*));
for (int i = 0; i < M->n; i++)
M->m[i] = (int*)malloc(M->n * sizeof(int));
}



int main()

{
int N;
Matrix M1;

initMat(&M1,N);

return 0;
}
