#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}

int main() {
    int **ptr,**A,**B,**C, m, n,p;
    scanf("%d %d %d", &m, &n, &p);


    ptr =(int **) calloc(m, sizeof(int*));

    for(int i=0; i<m; i++) {
        ptr[i] = (int *) calloc(n, sizeof(int));
        for(int j=0; j<n; j++) {
            scanf("%d", &ptr[i][j]);
       }
    }
    printf("Matrix A:- \n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {

            printf("%d ", ptr[i][j]);

        }
        printf("\n");

    }

    for(int i=0; i<n; i++) {
        ptr[i] = (int *) calloc(n, sizeof(int));
        for(int j=0; j<p; j++) {
            scanf("%d", &ptr[i][j]);
       }
    }
    printf("Matrix B:-\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<p; j++) {

            printf("%d ", ptr[i][j]);

        }
        printf("\n");

    }
    swap(&A[m][n], &B[n][p]);

}
