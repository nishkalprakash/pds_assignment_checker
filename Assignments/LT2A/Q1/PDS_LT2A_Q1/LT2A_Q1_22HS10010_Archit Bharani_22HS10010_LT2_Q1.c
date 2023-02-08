/*
Section 14
Roll No- 22HS10010
Name: Archit Bharani
Question No. 1
Description :
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int n;
    int **m;
} Matrix;

void initMat(Matrix *M, int N)                      //Allocating Matrix
{
    M->n = N;
    M->m = (int **)malloc(M->n * sizeof(int *));
    for (int i = 0; i < M->n; i++)
        M->m[i] = (int *)malloc(M->n * sizeof(int));
}

void scan(Matrix *M)                   //Scanning it
{
int a,b,i,j;
printf("Enter no. of rows");
scanf("%d",&a);

printf("Enter Elements ");
for(i=0;i<a;i++)
{
  for(j=0;j<a;j++)
  {
   scanf("%d",&M->m[i][j]);
  }
}

} 
void reverse_Mat(Matrix* M,int a)               //Reversing it
{
for(int i=a-1;i>=0;i--)
{
for(int j=a-1;j>=0;j--)
{
  printf("%d",M->m[i][j]);
}
printf("\n");
}

}



int main()
{
Matrix M1;
scan(&M1);

return 0;
}
