#include <stdio.h>
/*
Section 2
Roll No: 22HS10018
Name: Dilip Kumar Rewar
Assignment No: 7
Description:
*/
int swap(int *x, int *y){
                int t;
                 t= *x;
                 *x = *y;
                 *y = t;}
int main(){
    int **A, n, m, p,i,j;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("\nEnter p: ");
    scanf("%d",&p);
    printf("%d %d %d\n",m,n,p);


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


    int **B, **C;
    B = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    B[i] = (int *) calloc(n, sizeof(int));
    C = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
    C[i] = (int *) calloc(n, sizeof(int));

     printf("Enter Elements of matrix B: ");
    printf("\n");

    for (i= 0; i < n; i++){

        for(j=0; j < p; j++){

            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            swap(&A[i][j],&B[i][j]);
        }
    }
    printf("Matrix A is: \n");
    for (i = 0; i < m; i++){

        for(j=0; j < n; j++){

            printf(" %d",A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B is: \n");
    for (i = 0; i < n; i++){

        for(j=0; j < p; j++){
            printf(" %d",B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
