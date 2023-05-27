/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 8
* Description :
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Arr_2 {
        int **ptr;
        int m;
        int n;
    } A, B, C;
    printf("Enter the number of rows for Matix A: ");
    scanf("%d", &A.m);
    printf("\nEnter the number of columns for Matix A: ");
    scanf("%d", &A.n);
    printf("\nEnter the number of rows for Matix B: ");
    scanf("%d", &B.m);
    printf("\nEnter the number of columns for Matix B: ");
    scanf("%d", &B.n);
    A.ptr = (int **) malloc((A.m)*sizeof(int));
    for (int i=0;i<(A.m); i++)
    {
        A.ptr[i] = (int *) malloc((A.n)*sizeof(int));
    }
    B.ptr = (int **) malloc((B.m)*sizeof(int));
    for (int i=0;i<(B.m); i++)
    {
        B.ptr[i] = (int *) malloc((B.n)*sizeof(int));
    }
    C.ptr = (int **) malloc((A.m)*sizeof(int));
    for (int i=0;i<(A.m); i++)
    {
        C.ptr[i] = (int *) malloc((B.n)*sizeof(int));
    }
    printf("Enter the values for Matrix A \n");
    for(int i=0; i<(A.m);i++){
        for(int j=0; j<(A.n); j++){
            scanf("%d", &A.ptr[i][j]);
        }
    }
    printf("Enter the values for Matrix B\n");
    for(int k=0; k<(B.m);k++){
        for(int l=0; l<(B.n); l++){
            scanf("%d", &B.ptr[k][l]);
        }
    }
    printf("Matrix A:-\n");
    for(int i=0; i<A.m;i++){
        for(int j=0; j<A.n; j++){
            printf("%d ", A.ptr[i][j]);
        }
        printf("\n");
        }
    printf("Matrix B:-\n");
    for(int i=0; i<B.m;i++){
        for(int j=0; j<B.n; j++){
            printf("%d ", B.ptr[i][j]);
        }
        printf("\n");
        }
    if((A.n)==(B.m)){
        for(int i=0;i<(A.m);i++){
            for(int j=0;j<(B.n);j++){
                for(int k=0;k<(A.n);k++){
                    C.ptr[i][j] += (A.ptr[i][k])*(B.ptr[k][j]);
                }
            }
        }
        printf("Matrices after Multiplication\n");
        printf("Resultant Matrix:- \n");
        for(int i=0; i<(A.m);i++){
        for(int j=0; j<(B.n); j++){
            printf("%d ", C.ptr[i][j]);
        }
        printf("\n");
        }
        printf("Matrix A:-\n");
    for(int i=0; i<A.m;i++){
        for(int j=0; j<A.n; j++){
            printf("%d ", A.ptr[i][j]);
        }
        printf("\n");
        }
    printf("Matrix B:-\n");
    for(int i=0; i<B.m;i++){
        for(int j=0; j<B.n; j++){
            printf("%d ", B.ptr[i][j]);
        }
        printf("\n");
        }
    }
    else printf("Error: Invalid Matrix sizes for multiplication!");
}
