#include<stdio.h>
#include<stdlib.h>
void swap(int **a, int **b, int r, int c, int g){
int i, j;
a=(int **)malloc(1000);
b=(int **)malloc(1000);
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        a[i][j]=b[i][j];
    }
}
for(i=0;i<c;i++){
    for(j=0;j<g;j++){
        b[i][j]=a[i][j];
    }
}
}



int main(){
    int p, q, r, t, h, i, j;
    int a[100][100], b[100][100], c[100][100];
    scanf("%d %d %d", &p,&q,&r);
     printf("\n");

    for (i=0; i<p; i++)     // read matrix A
   for (j=0; j<q; j++)
 scanf("%d", &a[i][j]);
  printf("\n");

 for (i=0; i<q; i++)           // read matrix B
   for (j=0; j<r; j++)
 scanf("%d", &b[i][j]);

  printf("\n");



   printf("Matrix A");
    printf("\n");

    for (i=0; i<p; i++) {
        for (j=0; j<q; j++)
            printf ("%d ", a[i][j]);       // PRINT A IN MATRIX ORDER
            printf("\n");

             printf("\n");

}
printf("Matrix B");                           // PRINT B IN MATRIX ORDER
printf("\n");
    for (i=0; i<q; i++) {
        for (j=0; j<r; j++)
            printf ("%d ", b[i][j]);
            printf("\n");

    }
    return 0;
}
