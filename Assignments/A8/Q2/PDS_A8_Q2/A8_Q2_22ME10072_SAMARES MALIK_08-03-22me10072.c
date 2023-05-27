#include<stdio.h>



int main(){
    int m,n,p;
    printf("Enter the number of rows for matrix A:");
    scanf("%d",&m);
    printf("\nEnter the number of columns for matrix A");
    scanf("%d",&n);
    printf("\nEnter the number of rows for matrix B:");
    scanf("%d",&n);
    printf("\nEnter the number of columns for matrix B");
    scanf("%d",&p);
    printf("\n");
    int **A;
    int **B;
    int **C;
    *A = (int **)malloc(m*(sizeof(int)));
    *B = (int **)malloc(n*(sizeof(int)));
    *C = (int **)malloc(m*(sizeof(int)));
    printf("Enter values of matrix A:\n")
    for(int i=0;i<m;i++){
        A[i] = (int *)malloc(n*sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter values of matrix B:\n");
    for(int i=0;i<n;i++){
        B[i] = (int *)malloc(p*sizeof(int));
        for(int j=0;j<p;j++){
            scanf("%d",B[i][j]);
        }
    }
    printf("The matrices before multiplication:\n");
    printf("Matrix A:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    printf("Matrices after multiplication:\n");
    printf("Matrix A:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",A[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        C[i] = (int *)malloc(p*sizeof(int));
        for(int j=0;j<p;j++){
            C[i][j] = 0;
            for(int k=0;k<n;k++){
                C[i][j]+=A[i][k]*B[k][j];
            }

        }
    }
    printf("Matrix C:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }



    return 0;
}
