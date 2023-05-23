/*name- samares malik
  roll no-22ME10072
  assignment 7 q2*/
#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y){
    int t;
    t =*x;  *x=*y;  *y=t;
}
int main(){
    int m,n,p;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&p);
    int **A;
    int **B;
    int **C;
    A = (int**)calloc(m,sizeof(int));
    B = (int**)calloc(n,sizeof(int));
    C = (int**)calloc(m,sizeof(int));

    for(int i=0;i<m;i++){
        A[i]=(int*)calloc(n,sizeof(int));
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        B[i]=(int*)calloc(p,sizeof(int));
        for(int j=0;j<p;j++){
            scanf("%d",&B[i][j]);
        }
    }
    if(m==n){
        if(n==p){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(n<p){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(p<n){
            for(int i=0;i<m;i++){
                for(int j=0;j<p;j++){
                    swap(&A[i][j],&B[i][j]);
                }

            }
        }
    }
    else if(m<n){
        if(n==p){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(n<p){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(p<n){
            for(int i=0;i<m;i++){
                for(int j=0;j<p;j++){
                    swap(&A[i][j],&B[i][j]);
                }

            }
        }
    }
    else if(n<m){
        if(n==p){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(n<p){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    swap(&A[i][j],&B[i][j]);
                }
            }
        }
        if(p<n){
            for(int i=0;i<n;i++){
                for(int j=0;j<p;j++){
                    swap(&A[i][j],&B[i][j]);
                }

            }
        }

    }
    printf("Matrix A:-\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d  ",A[i][j]);
            if(j==n-1){
                printf("\n");
            }
        }
    }
    printf("Matrix B:-\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d  ",B[i][j]);
            if(j==p-1){
                printf("\n");
            }
        }
    }
    for(int i=0;i<m;i++){
        C[i]=(int*)calloc(p,sizeof(int));
        for(int j=0;j<p;j++){
            int s=0;
            for(int k=0;k<n;k++){
                s += A[i][k]*B[k][j]; //for matrix multiplication
            }
            C[i][j]=s;
        }
    }
    /*for(int i=0;i<m;i++){
        C[i] = (int*)calloc(p,sizeof(int));
        for(int j=0;j<p;j++){
            for(int k=0;k<n;k++){
                c[i][j] += A[i][k]*B[k][i];
            }
        }
    }*/
    printf("Matrix C:-\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            printf("%d  ",C[i][j]);
            if(j==p-1){
                printf("\n");
            }
        }
    }




    return 0;
}
