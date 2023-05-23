#include<stdio.h>
#include<stdlib.h>
int main(){
int**A,i,j,m,n;
printf("enter the number of rows :");
scanf("%d\n",&m);
printf("enter the number of columns :");
scanf("%d\n",&n);
A=(int**)calloc(m,sizeof(int));
for(i=0;i<m;i++){
    A[i]=(int*)calloc(n,sizeof(int));
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&A[m][n]);
    }
}
int**B,i,j,n,q;
printf("enter the number of rows :");
scanf("%d\n",&n);
printf("enter the number of columns :");
scanf("%d\n",&q);
A=(int**)calloc(n,sizeof(int));
for(i=0;i<n;i++){
    A[i]=(int*)calloc(q,sizeof(int));
}
for(i=0;i<n;i++){
    for(j=0;j<q;j++){
        scanf("%d",&B[n][q]);
    }
}

int r,s,u,v,temp[][];// swamping the Mattrix
temp[][]=A[m][n];
while(i==r){
    while(j==s){
        A[i][j]=B[r][s];
    }
}
else A[i][j]=A[i][j];

while(u==r){
    while(v==s){
        B[r][s]=temp[u][v];
    }
}
else B[r][s]=B[r][s];

printf("%d\n",&A[m][n]);
printf("%d\n",&B[n][q]);

int C[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        for(int)
    }
}

return 0;
}
