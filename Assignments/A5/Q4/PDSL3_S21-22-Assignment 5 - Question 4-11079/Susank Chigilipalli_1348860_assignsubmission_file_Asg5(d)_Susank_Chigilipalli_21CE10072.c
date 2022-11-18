/*This program is to */
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6
  Assignment : 5
  question : 4*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
   int **p,**q,**r;
   int m,n,M,N,m1,n1,a,b,i,j,k;
   printf("Enter number of elements rows you want for a matrix : ");
   scanf("%d",&m);
   printf("Enter number of elements coloumns you want for a matrix : ");
   scanf("%d",&n);
   p=(int **)malloc(m*sizeof(int *));
   for(i=0;i<m;i++)
   {
      printf("Enter row elements of %d row : ",i+1);
      p[i]= (int *)malloc(n*sizeof(int));
      for(j=0;j<n;j++)
      {
         scanf("%d",&p[i][j]);
      }
   }
   printf("Enter number of elements rows you want for the kernal matrix(only odd numbers) : ");
   scanf("%d",&M);
   printf("Enter number of elements coloumns you want for the kernal matrix(only odd numbers) : ");
   scanf("%d",&N);
   q=(int **)malloc(M*sizeof(int *));
   for(i=0;i<M;i++)
   {
      printf("Enter row elements of %d row : ",i+1);
      p[i]= (int *)malloc(N*sizeof(int));
      for(j=0;j<N;j++)
      {
         scanf("%d",&q[i][j]);
      }
   }
   m1=m-M-1;
   n1=n-N-1;
   r=(int **)malloc(m1*sizeof(int *));
   for(i=0;i<m1;i++)
   {
      p[i]= (int *)malloc(n1*sizeof(int));
   }
   for(k=0;k<)
   {
      for(i=0;i<m-M-1;i++)
      {
         for(j=0;j<=n)}}
}
