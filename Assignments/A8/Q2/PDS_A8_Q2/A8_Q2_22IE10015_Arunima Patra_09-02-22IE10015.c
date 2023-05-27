//sec 2
//Assignment no-8
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>
struct matrix{
  int **ptr;
  int m;
  int n;
};
struct matrix matrixadd(struct matrix M1, struct matrix M2){
    struct matrix M3;
    M3.ptr=(int **)malloc(M1.m*sizeof(int *));
   for(int i=0; i<M1.m; i++ ){
     M3.ptr[i]=(int*) malloc(M2.n*sizeof(int*));
   }
   M3.m=M1.m;
   M3.n=M2.n;
   for(int i=0; i<M1.m; i++){
    for(int j=0; j<M2.n; j++){
       for(int k=0; k<M1.n; k++){
            M3.ptr[i][j]+=M1.ptr[i][k]*M2.ptr[k][j];
        }
    }
}
return M3;

}
int main(){
   struct matrix M1, M2, M3;
   int m1,m2, n1, n2;
   printf("Enter the no. of rows for matrix A:\n");
   scanf("%d", &m1);
   printf("Enter the no. of coloumns for matrix A:\n");
   scanf("%d", &n1);
   printf("Enter the no. of rows for matrix B:\n");
   scanf("%d", &m2);
   printf("Enter the no. of coloumns for matrix B:\n");
   scanf("%d", &n2);
   M1.m=m1;
   M1.n=n1;
   M2.m=m2;
   M2.n=n2;
   printf("\nEnter the values for matrix A\n");
   M1.ptr=(int **)malloc(m1*sizeof(int *));
   for(int i=0; i<m1; i++ ){
     M1.ptr[i]=(int*) malloc(n1*sizeof(int*));
   }
   for(int i=0; i<M1.m; i++){
    for(int j=0; j<M1.n; j++){
        scanf("%d", &M1.ptr[i][j]);
    }
   }
   printf("\n");
    printf("\nEnter the values for matrix B\n");
    M2.ptr=(int **)malloc(m2*sizeof(int *));
   for(int i=0; i<m2; i++ ){
     M2.ptr[i]=(int*) malloc(n2*sizeof(int*));
   }
   for(int i=0; i<M2.m; i++){
    for(int j=0; j<M2.n; j++){
        scanf("%d", &M2.ptr[i][j]);
    }
   }
 printf("\nMatrix before multiplication\n:");
 printf("\nMatrix A:\n");
  for(int i=0; i<M1.m; i++){
    for(int j=0; j<M1.n; j++){
        printf("%d ", M1.ptr[i][j]);
    }
    printf("\n");
   }

 printf("\nMatrix B:\n");
  for(int i=0; i<M2.m; i++){
    for(int j=0; j<M2.n; j++){
        printf("%d ", M2.ptr[i][j]);
    }
    printf("\n");
   }
if(M1.n==M2.m){
   M3.ptr=(int **)malloc(m1*sizeof(int *));
   for(int i=0; i<m1; i++ ){
     M3.ptr[i]=(int*) malloc(n2*sizeof(int*));
   }
   M3.m=M1.m;
   M3.n=M2.n;
   M3=matrixadd(M1, M2);
printf("\n Matrices after multiplication:\n");
printf("\nMatrix A:\n");
  for(int i=0; i<M1.m; i++){
    for(int j=0; j<M1.n; j++){
        printf("%d ", M1.ptr[i][j]);
    }
    printf("\n");
   }
 printf("\nMatrix B:\n");
  for(int i=0; i<M2.m; i++){
    for(int j=0; j<M2.n; j++){
        printf("%d ", M2.ptr[i][j]);
    }
    printf("\n");
   }
  printf("\nMatrix C:\n");
  for(int i=0; i<M1.m; i++){
    for(int j=0; j<M2.n; j++){
        printf("%d ", M3.ptr[i][j]);
    }
    printf("\n");
   }
}
else{
    printf("Invalid matrix sizes for multiplication");
}
return 0;
}
