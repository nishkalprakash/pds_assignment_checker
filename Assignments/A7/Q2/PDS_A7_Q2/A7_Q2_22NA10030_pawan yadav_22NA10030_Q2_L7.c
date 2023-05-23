#include<stdio.h>
#include<stdlib.h>
int main(){

  int **A,**B;
  int n1,n2,n,temp,pip;
   printf("Enter the row and column limit:\n");
   scanf("%d%d%d",&n1,&n2,&n);
  printf("Enter the matrix A element:\n");

     A= (int **) calloc(n1, sizeof(int*));
     for (int i = 0; i < n1; i++){
     A[i] = (int *) calloc(n2, sizeof(int));}


     for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            scanf("%d",&A[i][j]);
        }
     }

      printf("Enter the matrix B element:\n");

     B = (int **) calloc(n2, sizeof(int*));
     for (int i = 0; i < n2; i++){
     B[i] = (int *) calloc(n, sizeof(int));}

      for(int i=0;i<n2;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
     }

if(n2>=n1){if(n>=n2)pip=n2;
   if(n2>=n)pip=n;
   for(int i=0;i<n1;i++){
    for(int j=0;j<pip;j++){
        temp=A[i][j];
        A[i][j]=B[i][j];
        B[i][j]=temp;
    }
   }}
   if(n1>n2){if(n>=n2)pip=n2;
   if(n2>=n)pip=n;
   for(int i=0;i<n2;i++){
    for(int j=0;j<pip;j++){
        temp=B[i][j];
        B[i][j]=A[i][j];
        A[i][j]=temp;
    }
   }}

printf("Matrix A:-\n");
      for (int p=0; p<n1; p++)
{
for (int q=0; q<n2; q++)
printf ("%d   ", A[p][q]);
printf ("\n");
}
printf("Matrix B:-\n");
for (int p=0; p<n2; p++)
{
for (int q=0; q<n; q++)
printf ("%d   ", B[p][q]);
printf ("\n");
}
printf("Matrix C;-\n");

/*for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        for(int k=0;k<n;k++){
         c[]

        }
    }
}*/
      return 0;

 }
