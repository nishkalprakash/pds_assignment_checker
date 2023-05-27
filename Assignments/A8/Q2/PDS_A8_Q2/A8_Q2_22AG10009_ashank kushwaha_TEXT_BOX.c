/*
SECTION:2
ROLL NO:22AG10009
NAME:ASHANK KUMAR KUSHWAHA
ASSIGNMENT NO:8
DESCRIPTION:random perfect
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct matrix{
    int **x;
} mat[2];
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int minimum(int a, int b){
    return ((a>=b)*b+(b>a)*a);
}
int main(){
    int **a,**b,**c,m,n,p,q,i,j,i1,j1;
    scanf("%d%d",&m,&n);
    mat[0].x=(int **)calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
    (mat[0].x)[i] = (int *) calloc(n, sizeof(int));
    scanf("%d%d",&p,&q);
    mat[1].x=(int **)calloc(p, sizeof(int *));
    for (int i = 0; i < p; i++)
    (mat[1].x)[i] = (int *) calloc(q, sizeof(int));

    c=(int **)calloc(p, sizeof(int *));
    for (int i = 0; i < p; i++)
    c[i] = (int *) calloc(q, sizeof(int));

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf ("%d", &((mat[0].x)[i][j]));
        }
    }
    for (i=0; i<p; i++){
        for (j=0; j<q; j++){
            scanf ("%d", &((mat[1].x)[i][j]));
        }
    }
    printf("matrix a\n");
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf ("%d ", ((mat[0].x)[i][j]));
        }
        printf("\n");
    }
    printf("matrix b\n");
    for (i=0; i<p; i++){
        for (j=0; j<q; j++){
            printf ("%d ", (mat[1].x)[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<m; i++){
    for (j1=0;j1<q; j1++){
        for (j=0,i1=0; j<n,i1<p; j++,i1++){
            c[i][j1]=c[i][j1]+((mat[0].x)[i][j])*((mat[1].x)[i][j]);
        }
    }}
    for (i=0; i<m; i++){
        for (j=0; j<p; j++){
            printf ("%d ",c[i][j]);
        }
        printf("\n");
    }
    free(a);
    free(b);
    free(c);
}