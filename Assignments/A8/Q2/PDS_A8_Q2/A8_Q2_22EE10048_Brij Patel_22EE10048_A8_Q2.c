/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 8

Description-Saddle point in 2d array
*/

#include <stdio.h>//including package
int main()//main method
{
int h=0,i,j,k,l,m,n,minrow=100000000,maxcol=0;
printf("Enter Shape of Array:");
scanf("%d %d",&m,&n);
int a[m][n];
printf("Enter Array Elements\n");
for(i=0;i<m;i++)//loop for row elements
{
for(j=0;j<n;j++)//loop for column elements
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]<minrow)
{
minrow=a[i][j];
k=j;
}
}
for(l=0;l<m;l++)//loop for row elements
{
if(a[l][k]>maxcol)
maxcol=a[l][k];
}

if(minrow==maxcol)
{
h=1;
printf("The saddle point is %d\n",minrow);
}
minrow=100000000;
maxcol=0;
}
if(h==0)
printf("There is no saddle point in this 2D Array\n");
return 0;//return statement
}

