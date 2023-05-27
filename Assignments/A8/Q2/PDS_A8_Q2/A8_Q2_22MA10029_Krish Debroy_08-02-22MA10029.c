#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int row;
    int col;
    int **mat;
} Mat;

void mult(Mat A , Mat B)
{
    if(A.col != B.row)
    {
        printf("Error : Invalid matrix sizes for multiplication!");
        return;
    }

    Mat C ;
    C.row=A.row;
    C.col=B.col;
    C.mat= (int**)malloc(A.row*sizeof(int*));
    for(int i=0;i<A.row;i++)
    {
        C.mat[i]=(int*)malloc(B.col*sizeof(int));
    }
    for(int x=0;x<A.row;x++)
    {
        for (int y=0;y<B.col;y++)
        {
            for (int z=0;z<A.col;z++)
            {
                C.mat[x][y]+= ((A.mat[x][z])*(B.mat[z][y]));
            }
        }
    }

    printf("\n\n\nMatrices after multiplication :");
    printf("\nMatrix A:\n");
    for(int i=0;i<A.row;i++)
    {
        for (int j=0;j<A.col;j++)
        {
            printf("%5d",A.mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(int i=0;i<B.row;i++)
    {
        for (int j=0;j<B.col;j++)
        {
            printf("%5d",B.mat[i][j]);
        }
        printf("\n");
    }
    printf("\nResultant matrix:\n");
    for(int i=0;i<C.row;i++)
    {
        for (int j=0;j<C.col;j++)
        {
            printf("%5d",C.mat[i][j]);
        }
        printf("\n");
    }



    return ;
}


int main()
{
    Mat A,B,C;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d",&A.row);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d",&A.col);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d",&B.row);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d",&B.col);

    A.mat= (int**)malloc(A.row*sizeof(int*));
    for(int i=0;i<A.row;i++)
    {
        A.mat[i]=(int*)malloc(A.col*sizeof(int));
    }

    B.mat= (int**)malloc(B.row*sizeof(int*));
    for(int j=0;j<B.row;j++)
    {
        B.mat[j]=(int*)malloc(B.col*sizeof(int));
    }


    printf("\nEnter the values for matrix A:\n");
    for(int i=0;i<A.row;i++)
    {
        for (int j=0;j<A.col;j++)
        {
            scanf("%d",&A.mat[i][j]);
        }
    }
    printf("\nEnter the values for matrix B:\n");
    for(int i=0;i<B.row;i++)
    {
        for (int j=0;j<B.col;j++)
        {
            scanf("%d",&B.mat[i][j]);
        }
    }

    printf("\n\n\nMatrices before multiplication :");
    printf("\nMatrix A:\n");
    for(int i=0;i<A.row;i++)
    {
        for (int j=0;j<A.col;j++)
        {
            printf("%5d",A.mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for(int i=0;i<B.row;i++)
    {
        for (int j=0;j<B.col;j++)
        {
            printf("%5d",B.mat[i][j]);
        }
        printf("\n");
    }

    mult(A,B);


    return 0;
}
