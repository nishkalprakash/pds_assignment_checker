/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
LAB TEST 2
desciption: 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int n;
    int **m;
} Matrix;

 void getMat(Matrix *M, int N, char *s)
{
    initMat(M, N);
    printf("\nEnter %d numbers for %s: ", M->n * M->n, s);
    for (int i = 0; i < M->n; i++)
        for (int j = 0; j < M->n; j++)
            scanf("%d", &M->m[i][j]);
    printMat(M, s);
}


printrev(a[100])
{
 

void printMat(Matrix *M, char *s)
{
    printf("\nThe Matrix %s is: \n\t", s, M->n);
    for (int i = 0; i < M->n; i++, printf("\n\t"))
        for (int j = 0; j < M->n; j++)
            printf("%d ", M->m[i][j]);
}

 




int main()
{
 int **M,m,n, a[100]
 printf("Enter the value of m: ");
 scanf("%d", &m);
 printf("\nEnter the value of n: ");
 scanf("%d", &n);
 M=(int**)malloc(m*sizeof(int*));
 for(int i=0, i<m, i++)
 {
  M[i]=(int*)malloc(n*(sizeof(int));
 }
 printf("\nEnter %d elements", m*n);
 for(int i=0, i<(m*n), i++)
 {
  scanf("%d", a[i]);
 }
 

