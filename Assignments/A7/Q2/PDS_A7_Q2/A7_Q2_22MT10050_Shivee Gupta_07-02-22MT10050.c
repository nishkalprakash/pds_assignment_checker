#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,k,m,n,p;
int **A;
A = (int**)calloc(m,sizeof(int*));
for(int i =0;i<m;++i)
    A[i] = (int*)calloc(n,sizeof(int));

    for(i=0;i<m;++i) free(A[i]);
    free(A);

 int **B;
B = (int**)calloc(n,sizeof(int*));
for(int j =0;j<n;++j)
    B[j] = (int*)calloc(p,sizeof(int));

    for(j=0;j<n;++j) free(B[j]);
    free(B);

    int **C;
C = (int**)calloc(m,sizeof(int*));
for(int k =0;k<m;++k)
    C[k] = (int*)calloc(p,sizeof(int));

    for(k=0;k<m;++k) free(C[k]);
    free(C);

return 0;
}
