/* Name: Abhijit Kumar
Roll no. 22IM10001
Section 14
Question 5
Topic-Printing the saddle point*/
#include<stdio.h>
int main()
{
int a[100][100];
int r,c;
printf(" \n Enter the number of rows : ");
scanf("%d",&r);
printf(" \n Enter the number of columns : ");
scanf("%d",&c);
int i,j;
printf("\n Enter the elements");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  scanf("%d",&a[i][j]);
 }
}
int m,n;
for(i=0,j=0;i<r;i++)
{
 m=a[i][j];
 for(j=0;j<c;j++)
 {
  if(a[i][j]<=m)
  a[i][j]=m;
  if(a[j][i]>=m)
  a[j][i]=n;
 }
if(m==n)
printf("\n %d is a saddle point",m);
}
}
