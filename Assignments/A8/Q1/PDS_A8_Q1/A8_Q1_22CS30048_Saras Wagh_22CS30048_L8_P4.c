#include<stdio.h>
int main()
{
  int r;
  printf("Enter the no. of rows=no. of columns in the array:\n");
 scanf("%d",&r);
 int A[r][r];
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<r;j++)
  {
   scanf("%d",&A[i][j]);
  }
 }
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<r;j++)
  {
   printf("%d ",A[i][j]);
  }
 }
 printf("\n Column major order is:\n");
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<r;j++)
  {
   printf("%d ",A[j][i]);
  }
 }
 return 0;
}
