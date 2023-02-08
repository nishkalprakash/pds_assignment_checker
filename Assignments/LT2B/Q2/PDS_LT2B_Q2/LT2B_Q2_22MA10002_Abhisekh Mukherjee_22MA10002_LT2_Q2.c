/*Abhisekh Mukherjee
sec :14 , roll no:22MA10002;
lab test 2
problem:2
*/


#include <stdio.h>
#include <stdlib.h>
int C,N;
typedef struct
{
    int n;
  int m;
    int **p;
} Mat;


int num(int a){
  if (a==1){
     scanf("%d",&N);
return N;
}
if(a==2){
    scanf("%d",&C);
    return C;
}
}



void initMat(Mat *M, int N,int C)
{
    M->m = N;
M->n=C;
    M->p = (int **)malloc(M->m * sizeof(int *));
    for (int i = 0; i < M->m; i++)
        M->p[i] = (int *)malloc(M->n * sizeof(int));
}

// recursive function  to print matrix

void recprint(Mat *M,int i)
{
   if(i>=M->m){
       return ;
}
 
      
        for (int j = 0; j < M->n; j++){
            printf("%d ", M->p[i][j]);
}
printf("\n");

   recprint( M,i+1);

}

void getMat(Mat *M, int N, int C)
{
    initMat(M, N,C);
   printf("enter the matrix\n");
    for (int i = 0; i < M->m; i++)
        for (int j = 0; j < M->n; j++)
            scanf("%d", &M->p[i][j]);
   
}





int main()
{
    
  

    Mat M;
printf("enter the number of rows\n");
  int N=num(1);
printf("enter the number of colums\n");
  int C=num(2);

    getMat(&M, N, C);
  int i=0;
printf("the matrix is \n");
    recprint(&M,i);

   

    return 0;
}
  
