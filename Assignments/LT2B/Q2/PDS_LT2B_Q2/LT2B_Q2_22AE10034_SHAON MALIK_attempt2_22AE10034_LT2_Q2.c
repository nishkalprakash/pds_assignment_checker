/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Lab Test: 2
 Question No :2
 Description : To print 2D array recursively
 */


#include <stdio.h>
#include <stdlib.h>


typedef struct arr2D{
    
    int m;
    int n;
    int **a;    
} Matrix;

void initMat(Matrix *A,int M,int N)

{
   A->n=N;
   A->m=M;
   A->a= (int**)malloc(A->m * sizeof(int*));//number of rows
   for (int i = 0; i < A->m; i++)
        A->a[i] = (int*)malloc(A->n * sizeof(int));//number of coloumns
}

void get(Matrix *A){
   printf("Enter %d elements : ",(A->m * A->n));
   for (int i = 0; i < A->m; i++)
        for (int j = 0; j < A->n; j++)
          scanf("%d",&A->a[i][j]);

}

void print_rec(Matrix *A,int k)
{
  int r,c;
  r=A->m;
  c=A->n;
  if(k+1==r*c)//base case for last element
    printf("%d ",A->a[k/c][k%c]);
  else
  {
    printf("%d ",A->a[k/c][k%c]);
    if(k%c+1==c)//last element of each row
     printf("\n");
    print_rec(A,++k); //recursive call for next element
  }

}

int main()
{
Matrix A;
int M,N;
printf("enter M:");
scanf("%d",&M);
printf("enter N:");
scanf("%d",&N);
initMat(&A,M,N);//allocate memory for A
get(&A);//store elements in A
print_rec(&A,0);//print A recursively
}
   

