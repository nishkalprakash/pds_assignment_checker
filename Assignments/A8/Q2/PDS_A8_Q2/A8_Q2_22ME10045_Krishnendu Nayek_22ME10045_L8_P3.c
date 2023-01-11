#include<stdio.h>
int main()
{
int a[100][100];
int r,c;
printf("\n enter the number of rows:");
scanf("%d",&r);
printf("\n enter the number of columns:");
scanf("%d",&c);
int i,j;
printf("\n Enter the elements:");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
 }
}

int m,n;
for(i=0;i<r;i++)
{
m=a[i][j];
for(j=0;j<c;j++)
{
if(a[i][j]<=m)
a[i][j]=m;
if(a[i]ij]<=n)
a[i][j]=n;
}
if(m==n)
printf("%d is a saddle point",m);
}
}

