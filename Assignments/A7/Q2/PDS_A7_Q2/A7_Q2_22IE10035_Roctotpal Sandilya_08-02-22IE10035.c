#include<stdio.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 2
*/

int min(int i,int j){
if(i<j) return i;
else return j;
}

int main(){

int m,n,p;
scanf("%d", &m);
scanf("%d", &n);
scanf("%d", &p);

int **a = (int**)calloc(m,sizeof(int*));
for(int i=0; i<m; i++) a[i]= (int*)calloc(n, sizeof(int));
int **b = (int**)calloc(n,sizeof(int*));
for(int i=0; i<m; i++) b[i]= (int*)calloc(p, sizeof(int));
int **c = (int**)calloc(m,sizeof(int*));
for(int i=0; i<m; i++) c[i]= (int*)calloc(p, sizeof(int));

for(int i=0; i<m; i++){
    for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<p; j++) {
            scanf("%d", &b[i][j]);
    }
}

for(int i=0; i<min(m,n); i++){
    for(int j=0; j<min(n,p); j++){
        int t = a[i][j];
        a[i][j]=b[i][j];
        b[i][j]=t;
    }
}

printf("Matrix A:-");
for(int i=0; i<m; i++){
    printf("\n");
    for(int j=0; j<n; j++) printf("%d ", a[i][j]);
}
printf("\nMatrix B");
for(int i=0; i<m; i++){
    printf("\n");
    for(int j=0; j<n; j++) printf("%d ", b[i][j]);
}
printf("\nMatrix C");
for(int i=0; i<m; i++){
    for(int j=0; j<p; j++){
        for(int k=0; k<n; k++) c[i][j]+= a[i][k]*b[k][j];
    }
}
for(int i=0; i<m; i++){
    printf("\n");
    for(int j=0; j<p; j++) printf("%d ", c[i][j]);
}
free(a);
free(b);
free(c);
return 0;
}
