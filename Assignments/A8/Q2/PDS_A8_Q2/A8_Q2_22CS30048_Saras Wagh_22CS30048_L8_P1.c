#include<stdio.h>
int main()
{
 int min=0,max=0,i,j,k,l;
 int r,c;
 printf("Enter the no. of rows in the array:\n");
 scanf("%d",&r);
 printf("Enter the no.of columns in the array:\n");
 scanf("%d",&c);
 int A[r][c];
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
   scanf("%d",&A[i][j]);
  }
 }
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
   printf("%d ",A[i][j]);
  }
 printf("\n");
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   for(k=0;k<c;k++)
   {
    if(min>=A[i][k])
    min=A[i][k];
   }
   for(l=0;l<r;l++)
   {
    if(max<=A[l][j])
    max=A[l][j];
   }
  if((min==A[i][j])&&(max==A[i][j]))
  printf("The saddle point is %d",A[i][j]);
  }
 }
  
 return 0; 
}
 
