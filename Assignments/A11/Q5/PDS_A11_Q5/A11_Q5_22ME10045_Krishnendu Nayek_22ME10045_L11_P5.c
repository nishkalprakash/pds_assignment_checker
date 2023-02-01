#include<stdio.h>
typedef struct 
{
 int n;
 int **m;  

}Matrix;

void initMat(Matrix *M,int N)
{

   M->n=N;
   M->m=(int**)malloc(M->n*sizeof(int*));

   for(int i = 0; i < M->n; i++)
   {
    M->m[i] = (int*)malloc(M->n * sizeof(int));
   }

}



int main()

{
Matrix M1;
int N1;
printf("\n Enter dimensions of the matrix:");
scanf("%d",&N1);
initMat(&M1,N);
}

