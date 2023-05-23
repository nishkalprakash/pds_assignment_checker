/* Name- Vedant Katole
section - 2
roll np - 22EC10087
Lab - 7
problem no - 2 */


#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int m, n, p;
    printf("Enter m,n ,p: ");
    scanf("%d%d%d", &m, &n, &p);

    int **A;
    int **B;

    //dynamically allocating the memory to A and B
    A = (int **) calloc(m, sizeof(int*));
    for(int i = 0; i < m; i++)
        A[i] = (int *) calloc(n, sizeof(int));

    B = (int **) calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++)
        B[i] = (int *) calloc(p, sizeof(int));

    //Taking the elements of A and B as input
    printf("Enter matrix A(%d x %d)\n", m, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    /*printf("\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }*/

    printf("\n\nEnter matrix B(%d x %d)\n", n , p);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &B[i][j]);
        }
    }

    int min_rows,min_cols;

    min_rows = (m<n)? m:n;
    min_cols = (p<n)? p:n;

    for(int i = 0; i < min_rows; i++){
        for(int j = 0; j < min_cols; j++){
            swap(&A[i][j], &B[i][j]);
        }
    }

    //printing the new matrices A and B
    printf("\nNew matrix A:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nNew matrix B:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    //Initializing the matrix C
    int **C;

    //dynamically allocating the memory to C
    C = (int **) calloc(m, sizeof(int*));
    for(int i = 0; i < m; i++)
        C[i] = (int *) calloc(p, sizeof(int));

    int sum;
    //Calculating AxB
    for(int i = 0; i < m; i++){
        sum = 0;
        for(int j = 0; j < p; j++){
            sum = 0;
            for(int count = 0; count < n; count++){
                sum += A[i][count] * B[count][j];
            }
            C[i][j] = sum;
        }
    }

    //printing the matrix C
    printf("\n\nMatrix C:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
