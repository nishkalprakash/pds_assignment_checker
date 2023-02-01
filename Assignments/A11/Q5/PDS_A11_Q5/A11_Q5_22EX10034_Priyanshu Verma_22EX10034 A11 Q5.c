/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 11
* Description : defining a structure matrix to specify a 2D matrix
*/ 

#include <stdio.h>
#include<stdlib.h>
typedef struct {
      int n;
      int **m;    
} Matrix;

Matrix *M initMat(int N){
          M->n=N;
          M->m = (int**)malloc(M->n * sizeof(int*));
          for (int i = 0; i < M->n; i++)M->m[i] = (int*)malloc(M->n * sizeof(int));
          return M;
}
Matrix* getmat(Matrix *M)
        int size=M->n;
        for (int i=0 ; i<size ; i++){
             for ( int j=0 ; j<size ; j++){
                 printf("%d", M->m);
             }
             printf("\n");
    }
    return ;

}


Matrix* zeroMat(Matrix *M){
   int size = m->n;
   for( int i=0 ; i<size ; i++){
    for ( int j=0 ; j<size ; j++){
         printf("%d", M->m[i][j]);
       }
         printf("\n");
       }
    return M ;

Matrix* multMat(Matrix* M1, Matrix* M2, Matrix* M3){
int size=M1->n, column=0;
for int (i=0; i<size ; i++){
   for ( int j=0 ; j<size ; j++){
       ele=M1->m[i][j]*M2->M3[j][i];
      }
      M3->m[i][column++]=ele;
      column++;
      
}
 return M3;
}
int main(){
 Matrix* M1 ,M2 ,M3 ;
printf("Enter N : ");
int n ;
scanf("%d",&n); 

M1=initMat(N);M2=initMat(N);M3=init(n);


printf("Enter %d numbers for M1: ", N*N);
M1=getMat(M1);

printf("Enter %d numbers for M2: ", N*N);
M2=getMat(M2);


M3=zeroMat(M3);
M3=multMat(M3);
printMat(M3)

return 0;
}

























