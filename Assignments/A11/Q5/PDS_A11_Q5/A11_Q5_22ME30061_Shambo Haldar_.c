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
d