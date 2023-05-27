/*sec2
Assignment no.9
Roll no. 22HS10058
Name - Ujjawal Jain
Question no. 2
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct amn {

int **ar;
int m;
int n;

}am;
am matrix_multi(am P , am Q){
    am r ;
    r.m = P.m;
    r.n = Q.n;
    r.ar = (int**)malloc(r.m*sizeof(int*));
for(int i = 0;i<r.m;i++){
    r.ar[i] = (int *)malloc(r.n*sizeof(int));
}
for(int i = 0;i<r.m;i++){
    for(int j=0;j<r.n;j++){
        for(int k =0;k<P.n;k++){
            r.ar[i][j]+=P.ar[i][k]*Q.ar[k][j];
        }
    }
}

return r;


}
int main(){
    am A,B;
printf("Enter the number of rows for matrix A: ");
scanf("%d",&A.m);
printf("Enter the number of columns for matrix A: ");
scanf("%d",&A.n);
printf("Enter the number of rows for matrix A: ");
scanf("%d",&B.m);
printf("Enter the number of columns for matrix A: ");
scanf("%d",&B.n);


A.ar = (int**)malloc(A.m*sizeof(int*));
for(int i = 0;i<A.m;i++){
    A.ar[i] = (int *)malloc(A.n*sizeof(int));
}

B.ar = (int**)malloc(B.m*sizeof(int*));
for(int i = 0;i<B.m;i++){
    B.ar[i] = (int *)malloc(B.n*sizeof(int));
}
printf("Enter the values for matrix A :\n");
for(int i = 0;i<A.m;i++){
    for(int j = 0;j<A.n;j++){
        scanf("%d",&A.ar[i][j]);
    }
}
for(int i = 0;i<B.m;i++){
    for(int j = 0;j<B.n;j++){
        scanf("%d",&B.ar[i][j]);
    }

}
printf("Matrix A:\n");
for(int i = 0;i<A.m;i++){
    for(int j = 0;j<A.n;j++){
        printf("%d ",A.ar[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i = 0;i<B.m;i++){
    for(int j = 0;j<B.n;j++){
        printf("%d ",B.ar[i][j]);
    }
    printf("\n");
}
printf("Matrix before Multiplication :\n");
    printf("Matrix A:\n");
for(int i = 0;i<A.m;i++){
    for(int j = 0;j<A.n;j++){
        printf("%d ",A.ar[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i = 0;i<B.m;i++){
    for(int j = 0;j<B.n;j++){
        printf("%d ",B.ar[i][j]);
    }
    printf("\n");
}
if(A.n==B.m){
    printf("Matrix after Multiplication :\n");
    printf("Matrix A:\n");
for(int i = 0;i<A.m;i++){
    for(int j = 0;j<A.n;j++){
        printf("%d ",A.ar[i][j]);
    }
    printf("\n");
}
printf("Matrix B:\n");
for(int i = 0;i<B.m;i++){
    for(int j = 0;j<B.n;j++){
        printf("%d ",B.ar[i][j]);
    }
    printf("\n");
}
printf("Resultant Matrix :\n");
    am C = matrix_multi(A,B);
for(int i = 0;i<C.m;i++){
    for(int j = 0;j<C.n;j++){
        printf("%d ",C.ar[i][j]);
    }
    printf("\n");
}

}
else{
    printf("Invalid matrix sizes for multiplication! ");
}













return 0;
}
