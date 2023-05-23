/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 7
Question :: 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <limits.h>
void swap(int *a,int *b){
    int t;
    t=*a;
    *a = *b;
    *b = t;

}
void Read_Mat (int A[][100],int x,int y){
    int i,j;
    for (i=0;i<x;i++){
        for (j=0;j<y;j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void Prod_Mat (int A[][100], int B[][100], int C[][100], int x, int y,int z){
    int i,j,k;
    for (i=0;i<x;i++){
        for (int j=0;j<z;j++){
            C[i][j] = 0;
            for (k=0;k<y;k++)
                C[i][j] += A[i][j]*B[k][j];
        }
    }
}
void PrintMatrix (int A[][100], int x, int y)
{
    int i, j;
    printf ("\n");
    for (i=0; i<x; i++){
        for (j=0; j<y; j++)
            printf ("%5d", A[i][j]);
    printf("\n");
    }
}
int main(){
    int m,n,p;
    scanf("%d %d %d",&m,&n,&p);
    int **a = (int**)calloc(m,sizeof(int));
    for (int i=0;i<m;i++){
        a[i] = (int*)calloc(n,sizeof(int));
    }
    int **b = (int**)calloc(n,sizeof(int));
    for (int i=0;i<m;i++){
        b[i] = (int*)calloc(p,sizeof(int));
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int x,y;
    if (m<=n) x=m;
    else x=n;
    if (n<=p) y=n;
    else y=p;
    for (int i=0; i<x;i++){
        for(int j=0; j<y;j++){
            swap(&a[i][j],&b[i][j]);
        }
    }
    printf("\n\nMatrixA\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nMatrixB\n\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    int **c = (int**)calloc(m,sizeof(int));
    for (int i=0;i<m;i++){
        c[i] = (int *)calloc(p,sizeof(int));
    }
    printf("\n\nMatrixC\n\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<p;j++){
            c[i][j] = 0;
            for (int k=0;k<n;k++)
                c[i][j] += a[i][j]*b[k][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
}

