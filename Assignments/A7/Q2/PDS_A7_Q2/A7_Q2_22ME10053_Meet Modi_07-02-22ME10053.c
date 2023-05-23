/* Name-Meet Modi
   Roll No-22ME10053
   Ques-07)02

*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


int main(){
    int **A;
    int **B;
    int m,n,p;
    printf("Enter the sizeS of matrixs(m,n,p) :");
    scanf("%d%d%d", &m,&n,&p);
    A = (int**)calloc(m,sizeof(int*));
    printf("Enter the array elements of A: \n");
    int i,j,k,x;
    for(i=0;i<m;i++){
        A[i] = (int*) calloc(n,sizeof(int));
        for(j=0;j<n;j++){
            scanf("%d", &A[i][j]);
        }
    }
    B = (int**)calloc(n,sizeof(int*));
    printf("Enter the array elements of B: \n");
    for(i=0;i<n;i++){
        B[i] = (int*) calloc(p,sizeof(int));
        for(j=0;j<p;j++) scanf("%d",&B[i][j]);
    }

    printf("\n Printing 2 D array  A : \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf(" \nPrinting 2 D array  B: \n");
    for(i=0;i<n;i++){
        for(j=0;j<p;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

   // Swapping Array elements of A and B

    int s_r = (m>n)? n : m;
    int s_c = (n>p)? p : n;


    for(i=0;i<s_r;i++){
        for(j=0;j<s_c;j++){
            swap(&A[i][j],&B[i][j]);
        }
    }

    // CROSS PRODUCT OF ARRAY A AND B

    int **C;
    C = (int**)calloc(m,sizeof(int*));
    for(i=0;i<m;i++){
        C[i] = (int*) calloc(p,sizeof(int));
        for(j=0;j<p;j++){
            for(x=0;x<n;x++){
                C[i][j] += A[i][x]*B[x][j];
            }
        }
    }

    printf(" \nPrinting 2 D array C: \n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
