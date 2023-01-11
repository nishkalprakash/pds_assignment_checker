/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 8
 *Description   : column major
 */

#include<stdio.h>
int main ()
{
  int a[10][10];
  int i,j,n;
  printf("Enter the no.of elements in a row :\n");
  scanf("%d",&n);
  printf("Enter the elements in row major order :\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
 printf("The column major order is :\n");
 for(j=0;j<n;j++)
  {
    for(i=0;i<n;i++)
    {
      printf("%d ",a[i][j]);
    }
  }
 return 0;
}
