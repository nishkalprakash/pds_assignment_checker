/*
Name Mohul Dutta
22EC30035
question 2 lab 8
*/
#include<stdio.h>
typedef struct{
int **ptr;
int row;
int col;
}matrix;
matrix mul(matrix a,matrix b){
    matrix r;
    int s;
r.ptr=(int **)malloc(a.row*sizeof(int*));
for(int i=0;i<a.row;i++)
    r.ptr[i]=(int *) malloc(b.col*sizeof(int));
for(int i=0;i<a.row;i++){

    for(int j=0;j<b.col;j++){
            s=0;
        for(int k=0;k<a.col;k++){
            s+=(a.ptr)[i][k]*b.ptr[k][j];
        }
        r.ptr[i][j]=s;
    }
}
return r;
}
int main(){
    int m,n,q,p;
matrix a,b;
printf("Enter the number of rows for matrix A: ");
scanf("%d",&m);
printf("Enter the number of coloumns for matrix A: ");
scanf("%d",&n);
printf("Enter the number of rows for matrix B: ");
scanf("%d",&q);
printf("Enter the number of columns for matrix B: ");
scanf("%d",&p);
a.row=m;
a.col=n;
b.row=q;
b.col=p;
a.ptr=(int **)malloc(m*sizeof(int*));
for(int i=0;i<m;i++)
    a.ptr[i]=(int *) malloc(n*sizeof(int));
b.ptr=(int **)malloc(q*sizeof(int*));
for(int i=0;i<m;i++)
    b.ptr[i]=(int *) malloc(p*sizeof(int));
printf("Enter the values for matrix A\n");

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a.ptr[i][j]);
    }
}
printf("Enter the values for matrix B\n");
for(int i=0;i<q;i++){
    for(int j=0;j<p;j++){
        scanf("%d",&b.ptr[i][j]);
    }
}
printf("Matrices before multplication:\n");
printf("Matrix A:\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",(a.ptr)[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i=0;i<q;i++){
    for(int j=0;j<p;j++){
        printf("%d ",(b.ptr)[i][j]);
    }
    printf("\n");
}
matrix r;
if(n==q){
printf("Matrices after multplication:\n");
printf("Matrix A:\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",(a.ptr)[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i=0;i<q;i++){
    for(int j=0;j<p;j++){
        printf("%d ",(b.ptr)[i][j]);
    }
    printf("\n");
}
printf("\n");
    r=mul(a,b);
    printf("Resultant Matrix\n");
for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){
        printf("%d ",(r.ptr)[i][j]);
    }
    printf("\n");
}
}
else{
    printf("Invalid Matrix sizes for multiplication!");
}


}
