#include <stdio.h>
#include <stdlib.h>
int main(){
int m,n,p,**A,**B;
printf("Enter the value of m, n and p");
scanf("%d %d %d",&m,&n,&p);
A=(int**)calloc(m, sizeof(int));
for(int i=0;i<m;i++){
    A[i]=(int*)calloc(n,sizeof(int));
}
B=(int**)calloc(n,sizeof(int));
for(int j=0;j<n;j++){
    B[j]=(int*)calloc(p,sizeof(int));
}
printf("Enter the values for matrix A:");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
    }
}
printf("\n");
printf("Enter the elements for array B:");

for(int k=0;k<n;k++){
    for(int l=0;l<p;l++){
        scanf("%d",&B[k][l]);
    }
}
printf("\n");

printf("Matrix A:\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        printf("%d\t",B[i][j]);
    }
    printf("\n");
}





return 0;
}

