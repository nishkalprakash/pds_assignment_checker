/*
Name-Modi Meet
Roll no-22ME10053
lAB QUES-08-02
*/

#include <stdio.h>
#include <stdlib.h>

struct array{
    int row;
    int col;
    int **ptr;
};

int main(){

    struct array A,B;

    printf("Enter the number of rows for matrix A : \n");
    scanf("%d",&A.row);
    printf("Enter the number of columns for matrix A :\n ");
    scanf("%d",&A.col);
    printf("Enter the number of rows for matrix B : \n");
    scanf("%d",&B.row);
    printf("Enter the number of columns for matrix B :\n ");
    scanf("%d",&B.col);

    printf("Enter the values of matrix A : \n");

    int i,j,k;
    A.ptr =(int**)malloc(sizeof(int*)*(A.row));
    for(i=0;i<(A.row);i++){
        A.ptr[i] =(int*)malloc(sizeof(int)*(A.col));
        for(j=0;j<(A.col);j++){
        scanf("%d",&(A.ptr[i][j]));
        }
    }

    printf("Enter the values of matrix B :\n");

    B.ptr =(int**)malloc(sizeof(int*)*(B.row));
    for(i=0;i<(B.row);i++){
        B.ptr[i] =(int*)malloc(sizeof(int)*(B.col));
        for(j=0;j<(B.col);j++){
        scanf("%d",&(B.ptr[i][j]));
        }
    }

    printf("Matrices before multiplication :\n");
    printf("Matrix A :\n");
    for(i=0;i<(A.row);i++){
        for(j=0;j<(A.col);j++){
            printf("%d ",A.ptr[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B :\n");
    for(i=0;i<(B.row);i++){
        for(j=0;j<(B.col);j++){
            printf("%d ",B.ptr[i][j]);
        }
        printf("\n");
    }

    struct array C;
    if(A.col != B.row) {printf("ERROR :Invalid sizes for matrix multiplication.\n"); return 0;}
    else{
        printf("Resultant matrix : \n");
        C.ptr =(int**)malloc(sizeof(int*)*(A.row));
        for(i=0;i<(A.row);i++){
            C.ptr[i] = (int*)malloc(sizeof(int)*(B.col));
            for(j=0;j<(B.col);j++){
                for(k=0;k<(A.col);k++){
                    C.ptr[i][j] += (A.ptr[i][k])*(B.ptr[k][j]);
                }
            }
        }
    }
    for(i=0;i<(A.row);i++){
        for(j=0;j<(B.col);j++){
            printf("%d ",C.ptr[i][j]);
        }
        printf("\n");
    }



    return 0;
}
