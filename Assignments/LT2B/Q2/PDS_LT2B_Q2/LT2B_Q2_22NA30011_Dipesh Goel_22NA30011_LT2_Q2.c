/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL <dipeshgoel@kgpian.iitkgp.ac.in>
	PDS LAB TEST - 2
	Description : 2D ARRAYS

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int R;
    int C;
    int **m;    //Here we will define the 2D array using malloc
} Matrix;

void initMat(Matrix *M)
{
    int R, C;
    printf("Enter R: "); scanf("%d",&R);printf("\n");
    printf("Enter C: "); scanf("%d",&C);printf("\n");

    M->R=R;     // M->R = Number of rows
    M->C=C;     // M->C = Number of columns

    M->m = (int**) malloc(M->R * sizeof(int*)); // Allocating memory for rows

    for (int i = 0; i < M->R; i++)
            M->m[i] = (int*) malloc(M->C * sizeof(int)); // Allocating memory for int entries in row
}

void getMat(Matrix *M)
{
    printf("Enter %d elements: ", M->R * M->C);

    for (int i=0; i<M->R; i++)
    {
        for (int j=0; j<M->C; j++)
            scanf ("%d", &M->m[i][j]);
    }
}

void printMat(Matrix *M)
{

    int i, j;
    for (i=0; i<M->R; i++)
    {
        printf("\n");
        for (j=0; j<M->C; j++){
            printf (" %2d", M->m[i][j]);
            //printf("\n");
        }
    }
    printf("\n");
}

void printelement(Matrix *M, int r, int c)
{
    printf("Inside printelement.....");printf("\n");
    if (r==0 && c==0)
    {
        printf("Inside 1st if .....");printf("\n");
        printf("%d ",M->m[r][c]);
        return;
    }
    if (c==0)
    {
        printf("Inside 2nd if .....");printf("\n");
        printf("%d ", M->m[r][c]);printf("\n");
        if (r!=0)   printelement(&M, r-1,M->C -1);
    }

    if (c!=0)
    {
        printf("Inside 3rd if .....");printf("\n");
        printf("r = %d, c = %d",r,c);printf("\n");
        printf("%d ",M->m[r][c]);printf("\n");
        printelement(&M, r, c-1);
    }

}

int main()

{
    Matrix M;                                       // Declaring Matrix
    initMat(&M);                                    // Initializing Matrix
    getMat(&M);                                     // Taking input for entries in M
    printMat(&M);                                   // Printing Matrix
    //printelement(&M, M.R-1, M.C-1);
    return 1;
}
