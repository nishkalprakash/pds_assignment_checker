#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int n;
struct node **m;
}Matrix;

void initMat(Matrix *M,int N)
{

M->n=N;
M->m=(int**)malloc(M->n * sizeof(int*));
 for (int i = 0; i < M->n; i++)
{
        M->m[i] = (int*)malloc(M->n * sizeof(int));
}
}

void printMat(Matrix *M)
{
for(int i=0;i<n;i++)
{  
  for(int j=0;j<n;j++)
  {
  printf("%d",M->m[i]ij]);	
  }
}

Matrix *getMat(Matrix *M,int n)
{
for(int i=0;i<n;i++)
{  
  for(int j=0;j<n;j++)
  {
  scanf("%d",M->m[i]ij]);	
  }
}
return M;
}

Matrix *zeroMat(Matrix *M,int n)
{
for(int i=0;i<n;i++)
{  
  for(int j=0;j<n;j++)
  {
    M->m[i][j]=0;
  }
return M;
}


Matrix *multMat(Matrix*M1, Matrix*M2, Matrix*M3,int n)
{
zeroMat(&M3,n);

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
  M3->m[i][j]+=(M1->m[i][j])* (M2->m[j][i]);
}
}
return M3;
}

int main()
{
Matrix *M1,*M2,*M3;
int n;
printf("Enter the value of n");
scanf("%d",&n);

initMat(M1,n);
initMat(M2,n);
initMat(M3,n);

printf("Enter %d numbers for M1",n*n);
M1=getMat(M1,n);

printf("Enter %d numbers for M2",n*n);
M1=getMat(M2,n);

M3=multMat(M1,M2,M3);

printMat(M3);
return 0;
}
