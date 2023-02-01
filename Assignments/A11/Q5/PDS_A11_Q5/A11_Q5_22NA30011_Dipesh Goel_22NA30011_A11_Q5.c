#include <stdio.h>
#include <stdlib.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL <dipeshgoel@kgpian.iitkgp.ac.in>
	Assignment No. 11
	Description : Matrix Multiplication using structures

*/

typedef struct {
    int n;
    int **m;    //Here we will define the 2D array using malloc in main fn
} Matrix;

void initMat(Matrix *M,int N)
{
   M->n=N;     // M->n = Number of columns

   M->m = (int**) malloc(M->n * sizeof(int*)); // Allocating memory for rows

   for (int i = 0; i < M->n; i++)
        M->m[i] = (int*) malloc(M->n * sizeof(int)); // Allocating memory for int entries in row
}

void getMat(Matrix *M,int N){

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            scanf ("%d", &M->m[i][j]);
    }
}

void printMat(Matrix *M, int N){

    int i, j;
    for (i=0; i<N; i++)
    {
        printf("\n");
        for (j=0; j<N; j++){
            printf (" %2d", M->m[i][j]);
            //printf("\n");
        }
    }
    printf("\n");
}

void zeroMat(Matrix *M, int N){
    int i, j;
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            M->m[i][j] = 0;
}

void multMat(Matrix* M1, Matrix* M2, Matrix* M3, int N){
    // ROW by COLUMN Multiplication of Two Matrices

    int i, j, k;                    // Loop Variables

    for (i=0; i<N; i++)             // Loop for parsing over rows of M1 and M3 and columns of M2
    {
        for (k=0;k<N;k++){          // Loop for parsing columns of M2 keeping row of M1 same

            for (j=0; j<N; j++)     // Loop for parsing row entries of M1 and column entries of M2
            {
                M3->m[i][k] += M1->m[i][j] * M2->m[j][k];   // Already Initialized all entries of M3 to zero by calling func zeroMat(&M3,N);
            }

        }
    }
}

int main()

{
    Matrix M1, M2, M3;                                       // Declaring Matrices

    int N;
    printf("Enter N: "); scanf("%d",&N);

    initMat(&M1,N);                                         // Initializing Matrices
    initMat(&M2,N);
    initMat(&M3,N);

    printf("Enter %d numbers for M1: ", N*N);getMat(&M1,N); // Taking input for entries in M1
    printf("Enter %d numbers for M2: ", N*N);getMat(&M2,N); // Taking input for entries in M2
    printf("M1 : "); printMat(&M1,N);
    printf("M2 : "); printMat(&M2,N);
    zeroMat(&M3,N);                                         // Important!!, otherwise multMat() may fail
    multMat(&M1,&M2,&M3,N);
    printf("The Matrix M3 = M1 * M2 is: "); printMat(&M3,N);// Displaying result

    return 1;
}
