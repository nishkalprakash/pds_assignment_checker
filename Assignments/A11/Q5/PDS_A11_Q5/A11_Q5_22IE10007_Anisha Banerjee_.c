typedef struct{
   int n;
   int **m;
}matrix;

void initMat(Matrix *M,int N)
{
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
        M->m[i] = (int*)malloc(M->n * sizeof(int));
}
getMat(Matrix *M,…)
{}
printMat(Matrix *M,…)
{}
zeroMat(Matrix *M,…)
{}
multMat(Matrix* M1,Matrix* M2,Matrix* M3,…)
{}

int main()
{
Matrix M1;
    \\ Ask user N
initMat(&M1,N)
    \\ rest of the program
return 0;
}