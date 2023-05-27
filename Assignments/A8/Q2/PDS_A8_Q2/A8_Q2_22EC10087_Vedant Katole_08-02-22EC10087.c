/*Name- Vedant Katole
Roll no-22EC10087
section 2
lab no - 8
problem no - 2*/

#include<stdio.h>

typedef struct matrix{
    int m;
    int n;
    int **mat;
}matr;

matr mult(matr A, matr B)
{
    matr prod;
    prod.m = A.m;
    prod.n = B.n;
    //dynamically allocating memory to prod.mat
    prod.mat = (int **) calloc(prod.m, sizeof(int*));
    for(int i = 0; i < prod.m; i++)
        prod.mat[i] = (int *) calloc(prod.n, sizeof(int));

    int sum;
    //Calculating prod
    for(int i = 0; i < prod.m; i++){
        sum = 0;
        for(int j = 0; j < prod.n; j++){
            sum = 0;
            for(int count = 0; count < A.n; count++){
                sum += A.mat[i][count] * B.mat[count][j];
            }
            prod.mat[i][j] = sum;
        }
    }

    return prod;
}

int main()
{
    matr A, B;
    printf("Enter the number of rows for matrix A: ");
    scanf("%d", &A.m);
    printf("Enter the number of columns for matrix A: ");
    scanf("%d", &A.n);
    printf("Enter the number of rows for matrix B: ");
    scanf("%d", &B.m);
    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &B.n);
    //dynamically allocating memory to A.mat
    A.mat = (int **) calloc(A.m, sizeof(int*));
    for(int i = 0; i < A.m; i++)
        A.mat[i] = (int *) calloc(A.n, sizeof(int));
    //dynamically allocating memory to B.mat
    B.mat = (int **) calloc(B.m, sizeof(int*));
    for(int i = 0; i < B.m; i++)
        B.mat[i] = (int *) calloc(B.n, sizeof(int));
    //Taking values for matrix A.mat
    printf("\nEnter the values for matrix A :\n");
    for(int i = 0; i < A.m; i++){
        for(int j = 0; j < A.n; j++){
            scanf("%d", &A.mat[i][j]);
        }
    }
    //Taking values for matrix B.mat
    printf("\nEnter the values for matrix B :\n");
    for(int i = 0; i < B.m; i++){
        for(int j = 0; j < B.n; j++){
            scanf("%d", &B.mat[i][j]);
        }
    }

    //Printing matrices before multiplication
    printf("\nMatrix A before multiplication:\n");
    for(int i = 0; i < A.m; i++){
        for(int j = 0; j < A.n; j++){
            printf("%d\t", A.mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B before multiplication:\n");
    for(int i = 0; i < B.m; i++){
        for(int j = 0; j < B.n; j++){
            printf("%d\t", B.mat[i][j]);
        }
        printf("\n");
    }

    if(A.n != B.m){
        printf("Invalid matrices for multiplication!!!");
        return 0;
    }

    matr C;
    C = mult(A,B);

    //Printing matrices after multiplication
    printf("\nMatrix A after multiplication:\n");
    for(int i = 0; i < A.m; i++){
        for(int j = 0; j < A.n; j++){
            printf("%d\t", A.mat[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B after multiplication:\n");
    for(int i = 0; i < B.m; i++){
        for(int j = 0; j < B.n; j++){
            printf("%d\t", B.mat[i][j]);
        }
        printf("\n");
    }

    //printing the multiplied matrix
    printf("\n\nMultiplied matrix:\n");
    for(int i = 0; i < C.m; i++){
        for(int j = 0; j < C.n; j++){
            printf("%d ", C.mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
