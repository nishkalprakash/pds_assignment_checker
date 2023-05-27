# include <stdio.h>
# include <stdlib.h>

// defining the structure to store a 2D matrix, say A having m rows & n columns
typedef struct matrix
{
    int m,n;
    int **M;

} mat;

// function to multiply to matrix A and B
mat mul(mat A, mat B)
{
    mat C;
    C.M = (int **) calloc(A.m, sizeof(int*));
    for (int i = 0; i < A.m; i++)
    {
        C.M[i] = (int *) calloc(B.n, sizeof(int));
    }

    if(A.n==B.m)

    {
        for(int i=0; i<A.m; i++)
        {
            for(int j=0; j<B.n; j++)
            {

                for(int k=0; k<A.n; k++)
                {
                    C.M[i][j]+=A.M[i][k]*B.M[k][j];
                }
            }
        }
    }
    return C;
}

int main()
{
    // defining 3 matrices
    mat A,B,C;

    // scanning the size of A and it's values
    printf("Enter the size of A: ");
    scanf("%d" "%d",&A.m,&A.n);
    A.M = (int **) calloc(A.m, sizeof(int*));
    for (int i = 0; i < A.m; i++)
    {
        A.M[i] = (int *) calloc(A.n, sizeof(int));
    }
    for(int i=0; i<A.m; i++)
    {
        for(int j=0; j<A.n; j++)
        {
            scanf("%d",&A.M[i][j]);
        }
    }

    // scanning the size of B and it's values
    printf("Enter the size of B: ");
    scanf("%d" "%d",&B.m,&B.n);
    B.M = (int **) calloc(B.m, sizeof(int*));
    for (int i = 0; i < B.m; i++)
    {
        B.M[i] = (int *) calloc(B.n, sizeof(int));
    }
    for(int i=0; i<B.m; i++)
    {
        for(int j=0; j<B.n; j++)
        {
            scanf("%d",&B.M[i][j]);
        }
    }

    // printing the scanned matrices
    printf("Matrices before multiplication:\n");
    printf("Matrix A:\n");
    for(int i=0; i<A.m; i++)
    {
        for(int j=0; j<A.n; j++)
        {
            printf("%d ",A.M[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0; i<B.m; i++)
    {
        for(int j=0; j<B.n; j++)
        {
            printf("%d ",B.M[i][j]);
        }
        printf("\n");
    }

    // printing the matrices after multiplication
    if(A.n!=B.m)
    {
        printf("Invalid matrix sizes for multiplication.\n");
    }
    else
    {
        C=mul(A,B);
        printf("Matrices after multiplication:");
        printf("Matrix A:\n");
        for(int i=0; i<A.m; i++)
        {
            for(int j=0; j<A.n; j++)
            {
                printf("%d ",A.M[i][j]);
            }
            printf("\n");
        }
        printf("Matrix B:\n");
        for(int i=0; i<B.m; i++)
        {
            for(int j=0; j<B.n; j++)
            {
                printf("%d ",B.M[i][j]);
            }
            printf("\n");
        }


        // printing the resultant matrix-
        for(int i=0; i<A.m; i++)
        {
            for(int j=0; j<B.n; j++)
            {
                printf("%d ",C.M[i][j]);
            }
            printf("\n");
        }



    }

    return 0;

}

