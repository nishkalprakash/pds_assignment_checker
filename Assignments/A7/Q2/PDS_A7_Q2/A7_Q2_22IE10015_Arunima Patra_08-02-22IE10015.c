//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-2
#include<stdio.h>
int min(int x, int y){
   if(x<y){
    return x;
   }
   return y;
}
int main(){
 int m,n,p;

 scanf("%d", &m);

 scanf("%d", &n);

 scanf("%d", &p);

 int**A= (int**)calloc(m, sizeof(int*));
 for(int i=0; i<m; i++){
    A[i]=(int*)calloc(n, sizeof(int));
 }
 int**B= (int**)calloc(n, sizeof(int*));
 for(int i=0; i<n; i++){
    B[i]=(int*)calloc(p, sizeof(int));
 }
 int**C= (int**)calloc(m, sizeof(int*));
 for(int i=0; i<m; i++){
    C[i]=(int*)calloc(p, sizeof(int));
 }
 for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        scanf("%d", &A[i][j]);
    }
 }
 for(int i=0; i<n; i++){
    for(int j=0; j<p; j++){
        scanf("%d", &B[i][j]);
    }
 }
 int row1=min(m,n);
 int col1=min(n,p);
 for(int i=0; i<row1; i++){
    for(int j=0; j<col1; j++){
        int temp=A[i][j];
        A[i][j]=B[i][j];
        B[i][j]=temp;
    }
 }
 printf("\n Matrix A:\n");
 for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        printf("%d\t",A[i][j]);
    }
    printf("\n");
 }
 printf("\n Matrix B:\n");
 for(int i=0; i<n; i++){
    for(int j=0; j<p; j++){
        printf("%d\t",B[i][j]);
    }
    printf("\n");
 }

for(int i=0; i<m; i++){
    for(int j=0; j<p; j++){
       for(int k=0; k<n; k++){
            C[i][j]+=A[i][k]*B[k][j];
        }
    }
}
printf("\n Matrix C:\n");
 for(int i=0; i<m; i++){
    for(int j=0; j<p; j++){
        printf("%d\t",C[i][j]);
    }
    printf("\n");
 }








return 0;
}
