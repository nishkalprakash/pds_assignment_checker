#include<stdio.h>
#include<stdlib.h>
int count=0;
int **M;
int m;
int n;
int input(int n,int m)
{
  for(int i=0;i<m;i++)
  {
   for(int j=0;j<n;j++)
   {
     scanf("%d",&M[i][j]);
    printf("m,n:");
   }
  }
}
int main()
{
  printf("enter m,n:");
  scanf("%d %d",&m,&n);
  M=(int**)malloc(m*sizeof(int*));
  for(int i=0;i<n;i++)
  M[i]=(int*)malloc(n*sizeof(int));
  return 0;
}


