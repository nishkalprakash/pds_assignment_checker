*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
assingment number:11
problem:5
topic:recursion to link list
*/


#include<stdio.h>
#include<stdlib.h>
typedef struct {
  int n;
  int **m;    

} Matrix;
// initialization

void initMat(Matrix *M,int N)

{
   
   M->n=N;
   M->m = (int**)malloc(M->n * sizeof(int*));
   for (int i = 0; i < M->n; i++)
   M->m[i] = (int*)malloc(M->n * sizeof(int));
int i,j;
for(i=0;i<N;i++){
   for(j=0;j<N;j++){
         scanf("%d",&M->m[i][j]);
}
}

}

// print the matrix
void print(Matrix *M,int N){
int i,j;
for(i=0;i<N;i++){
   for(j=0;j<N;j++){
         scanf("%d",&M->m[i][j]);
}
}

}






// main func

int main()

{

     Matrix M1;
     int N;
scanf("%d",&N);
     initMat(&M1,N);
 Matrix M2;
  initMat(&M2,N);
Matrix M;





  print(M);
return 0;
    

}
