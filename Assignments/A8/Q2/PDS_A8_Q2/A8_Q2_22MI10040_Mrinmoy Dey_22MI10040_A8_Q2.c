/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 8
Question :: 2
*/
#include <stdio.h>
struct matrix{
    int **ptr;
    int rows;
    int cols;
};
int main(){
    struct matrix A,B,C;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d",&A.rows);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d",&A.cols);
    printf("Enter the number of rows for matrix A: ");
    scanf("%d",&B.rows);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d",&B.cols);

    A.ptr = (int **)malloc(A.rows*sizeof(int*));
    for (int i=0;i<A.rows;i++){
        A.ptr[i] = (int*)malloc(A.cols*sizeof(int));
    }
    printf("Enter the values for matrix A: \n");
    for (int i=0;i<A.rows;i++){
        for (int j=0;j<A.cols;j++){
            scanf("%d",&A.ptr[i][j]);
        }
    }
    printf("Enter the values for matrix B: \n");
    B.ptr = (int **)malloc(B.rows*sizeof(int*));
    for (int i=0;i<B.rows;i++){
        B.ptr[i] = (int*)malloc(B.cols*sizeof(int));
    }
    for (int i=0;i<B.rows;i++){
        for (int j=0;j<B.cols;j++){
            scanf("%d",&B.ptr[i][j]);
        }
    }
    printf("Matrices before multiplication: \n");
    printf("Matrix A: \n");
    for (int i=0;i<A.rows;i++){
        for (int j=0;j<A.cols;j++){
            printf("%d ",A.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B: \n");
    for (int i=0;i<B.rows;i++){
        for (int j=0;j<B.cols;j++){
            printf("%d ",B.ptr[i][j]);
        }
        printf("\n");
    }
    C.rows = A.rows;
    C.cols = B.cols;
    C.ptr = (int **)malloc(C.rows*sizeof(int*));
    for (int i=0;i<C.rows;i++){
        C.ptr[i] = (int*)malloc(C.cols*sizeof(int));
    }

    if (A.cols==B.rows){
    for (int i=0;i<C.rows;i++){
        for (int j=0;j<C.cols;j++){
            C.ptr[i][j] = 0;
            for (int k=0;k<A.cols;k++){
                C.ptr[i][j] += A.ptr[i][k]*B.ptr[k][j];
            }
        }
    }
    printf("Matrices after multiplication: \n");
    printf("Matrix A: \n");
    for (int i=0;i<A.rows;i++){
        for (int j=0;j<A.cols;j++){
            printf("%d ",A.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B: \n");
    for (int i=0;i<B.rows;i++){
        for (int j=0;j<B.cols;j++){
            printf("%d ",B.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Resultant Matrix: \n");

    for (int i=0;i<C.rows;i++){
        for (int j=0;j<C.cols;j++){
            printf("%d ",C.ptr[i][j]);
        }
        printf("\n");
    }
    }
    else printf("Error: Invalid matrix sizes for multiplication!");
}
