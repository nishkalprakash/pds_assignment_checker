#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z,w;
    int **a;
    int **b;
    int **c;
    printf("Enter the number of rows of matrix A :");
    scanf("%d",&x);
    printf("Enter the number of coulumn of matrix A :");
    scanf("%d",&y);
    printf("Enter the number of rows of matrix B :");
    scanf("%d",&z);
    printf("Enter the number of column of matrix B :");
    scanf("%d",&w);
    if(y!=z) printf("INVALID MATRIX SIZES FOR MULTIPLICATION");
    else{
    a = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++){
        a[i] = (int *)malloc(y * sizeof(int));
    }



    b = (int **)malloc(z * sizeof(int *));
    for (int i=0; i<z; i++){
        b[i] = (int *)malloc(w * sizeof(int));
    }
    c = (int **)malloc(x * sizeof(int *));
    for (int i=0; i<x; i++){
        c[i] = (int *)malloc(w * sizeof(int));
    }
    printf("Enter the values of matrix A\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){

            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the values of matrix B\n");
    for(int i=0;i<z;i++){
        for(int j=0;j<w;j++){

            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix before Multiplication");
    printf("Matrix A\n");
    for(int i=0;i<x;i++){

        for(int j=0;j<y;j++){

                    printf("%d   ",a[i][j]);

            }
            printf("\n");



        }
    printf("Matrix B\n");
    for(int i=0;i<x;i++){

        for(int j=0;j<w;j++){

                    printf("%d   ",b[i][j]);

            }
            printf("\n");



        }
    for (int i = 0; i < x; i++) {
            for (int j = 0; j < w; j++) {
                c[i][j] = 0;
    for (int k = 0; k < y; k++) {
            c[i][j] += a[i][k] * b[k][j];
}
}
}

        printf("Resultant Matrix\n");
        for(int i=0;i<x;i++){

        for(int j=0;j<w;j++){

                    printf("%d   ",c[i][j]);

            }
            printf("\n");



        }

    }






return 0;

}

