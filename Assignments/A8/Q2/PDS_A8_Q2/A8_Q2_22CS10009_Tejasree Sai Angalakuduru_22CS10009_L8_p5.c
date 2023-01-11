/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 8
 *Description   : saddle point
 */
#include<stdio.h>
int main ()
{
  int a[10][10];
  int i,j,k,n1,n2,max[3],min[3];
  printf("shape of matrix :\n");
  scanf("%d %d",&n1,&n2);
  printf("Enter the elements in row major order :\n");
  for(i=0;i<n1;i++)
  {
    for(j=0;j<n2;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
 
 for(i=0;i<n1;i++)
  {
    min[i]=a[i][0];
    for(j=0;j<n2;j++)
    {
      
      if(a[i][j]<=min[i])
        min[i]=a[i][j];
    }
 }
 for(j=0;j<n2;j++)
  {
    max[j]=a[0][j];
    for(i=0;i<n1;i++)
    {
      
      if(a[i][j]>=max[j])
        max[j]=a[i][j];
    }
  }
for(i=0;i<n1;i++)
  {
    k=1;
    
    for(j=0;j<n2;j++)
    {
      
      if(a[i][j]==min[i]&&a[i][j]==max[j])
       { printf("%d is a saddle point",a[i][j]);
         k=0;
        break;
       }
    }
   
 }
 if(k=1)
   printf("No saddle point");
return 0;
}
