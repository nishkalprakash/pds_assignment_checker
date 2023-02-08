#include<stdio.h>
#include<stdlib.h>
void input()
{
 int m,n;
 printf("\n Enter m:");
 scanf("%d",&m);
 printf("\n Enter n:");
 scanf("%d",&n);
 int arr[m][n];

 printf("\n Enter %d elements:",m*n);
 
 int i,j;
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
  {
  scanf("%d",&arr[i][j]);
  }
}
int arr2[m][n];
int k,l;
for(i=m-1,k=0;i>=0;i--,k++)
{
 for(j=n-1,l=0;j>=0;j--,l++)
  {
   arr2[k][l]=arr[i][j];
  }
}
/*for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",arr2[i][j]);
}
printf("\n");
}*/
for(i=0;i<m;i++)
{
int *ptr=&arr2[i][0];
dis(*ptr,n);
printf("\n");
}


}

int dis(int *p,int n)
{
if(p==n)
{
return 0;
}
printf("%d ",p);
dis(*(p+1),n);
return 0;
}



 
int main()
{
input();
}

