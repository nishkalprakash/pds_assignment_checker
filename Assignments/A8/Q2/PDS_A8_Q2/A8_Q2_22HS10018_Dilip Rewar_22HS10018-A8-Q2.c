#include <stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 8
Description:
*/
struct matrix{
    int rows;
    int column;
};
int main(){
    int m,n,p,r;
    struct matrix **A,**B;
    printf("Enter rows of matrix A: ");
    scanf("%d",&m);
    printf("Enter columns of matrix A: ");
    scanf("%d",&n);
    printf("Enter rows of matrix B: ");
    scanf("%d",&p);
    printf("Enter columns of matrix B: ");
    scanf("%d",&r);
    A = (int **) calloc(m, sizeof(int*));
     for (int i = 0; i < m; i++)
    A[i] = (int *) calloc(n, sizeof(int));

    printf("Enter Elements of matrix A: ");
    printf("\n");
    for (int i = 0; i < m; i++){

        for(int j=0; j < n; j++){

            scanf("%d",&A[i][j]);
        }
    }

    B = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    B[i] = (int *) calloc(n, sizeof(int));

     printf("Enter Elements of matrix B: ");
    printf("\n");

    for (int i= 0; i < p; i++){

        for(int j=0; j < r; j++){

            scanf("%d",&B[i][j]);
        }}

        printf("Matrix A before multiplication is: \n");
    for (int i = 0; i < m; i++){

        for(int j=0; j < n; j++){

            printf(" %d",A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B before multiplication is: \n");
    for (int i = 0; i < p; i++){

        for(int j=0; j < r; j++){
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
