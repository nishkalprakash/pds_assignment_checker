#include<stdio.h>


typedef struct {

    int n;
printf("Enter the value of n:\n");
scanf("%d",&n);

    int **m;    \\ Here we will define the 2D array using malloc in main fn

} Matrix

void initMat(Matrix *M,int N)

{

   M->n=N;

   M->m = (int**)malloc(M->n * sizeof(int*));

   for (int i = 0; i < M->n; i++)

        M->m[i] = (int*)malloc(M->n * sizeof(int));

}

int main()

{

Matrix M1;

    \\ Ask user N

initMat(&M1,N)

    \\ rest of the program

}
{

MatrixM2;
getMat(&M1,i,j)
 printf("The matrix is:\n");
   printf("The matrix is:\n");
}
  void getMat(Matrix *M,int i,int j)

{              
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
 printf("The matrix is:\n");
}

