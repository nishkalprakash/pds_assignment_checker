/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 11
* Description : Program to Define a structure Matrix to specify a 2D matrix.
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct {

    int n;

    int **m;   

} Matrix;

void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}
int main()
{


