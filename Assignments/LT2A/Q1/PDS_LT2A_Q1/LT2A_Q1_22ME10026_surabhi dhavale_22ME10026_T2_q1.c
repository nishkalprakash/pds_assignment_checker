/*
section 14
Surabhi Dhavale
Roll no.:22ME10026
Lab Test 2
set A
Question 1
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int n;
    int **m;
} Matrix;

void initMat(Matrix *M, int N)
{
    M->n = N;
    M->m = (int **)malloc(M->n * sizeof(int *));
    for (int i = 0; i < M->n; i++)
        M->m[i] = (int *)malloc(M->n * sizeof(int));
}

void printMat(Matrix *M, char *s)
{
    printf("\nThe Matrix %s is: \n\t", s, M->n);
    for (int i = 0; i < M->n; i++, printf("\n\t"))
        for (int j = 0; j < M->n; j++)
            printf("%d ", M->m[i][j]);
}

void getMat(Matrix *M, int N, char *s)
{
    initMat(M, N);
    printf("\nEnter %d numbers for %s: ", M->n * M->n, s);
    for (int i = 0; i < M->n; i++)
        for (int j = 0; j < M->n; j++)
            scanf("%d", &M->m[i][j]);
    printMat(M, s);
}

void zeroMat(Matrix *M, int N)
{
    initMat(M, N);
    for (int i = 0; i < M->n; i++)
        for (int j = 0; j < M->n; j++)
            M->m[i][j] = 0;
}

void multMat(Matrix *M1, Matrix *M2, Matrix *M3)
{
    for (int i = 0; i < M1->n; i++)
        for (int j = 0; j < M2->n; j++)
            for (int k = 0; k < M3->n; k++)
                M3->m[i][j] += M1->m[i][k] * M2->m[k][j];
}

/*
    Function to free the memory allocated for a 2d matrix
*/
void freeMemory(Matrix *M)
{
    int sz = M->n;
    for (int i = 0; i < sz; i++)
    {
        free(M->m[i]);
    }
    free(M->m);
}

int main()
{
    int N;
    Matrix M1, M2, M3;

    printf("Enter N: ");
    scanf("%d", &N);

    getMat(&M1, N, "M1");
    getMat(&M2, N, "M2");

    zeroMat(&M3, N);
    multMat(&M1, &M2, &M3);
    printMat(&M3, "M1 * M2");

    // we should free the memory to avoid memory leak
    // An important programming practice :)
    freeMemory(&M1);
    freeMemory(&M2);
    freeMemory(&M3);

    return 0;
}
