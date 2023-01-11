/*
Section 14
Surabhi Prakash Dhavale
22ME10026
assignment8
LAB9
Question 1
*/
#include<stdio.h>                             //including package
int main()
{
int h=0,i,j,k,l,m,n,minrow=100000000,maxcol=0;
printf("Entershape of array");
scanf("%d %d",&m,&n);
int a[m][n];
printf("Enter array elements\n");

for(i=0;i<m;i++)                             //loop for row elements
{
for(j=0;j<n;j++) {
scanf("%d",&a[i][j]);                           //loop for column elements
  
if (a[i][j]>maxcol)
{
maxcol=a[i][j];
k=j;
}
}
}
for(i=0;l<m;l++)                            //loop for row element
{
if(a[l][k]<minrow){
minrow=a[l][k];
}
if(minrow==maxcol)
{
h=1;
printf("The saddle point is %d\n",minrow);
}

}
if(h==0)
printf("Thereis no saddle point in this 2D array\n");
return 0;                                 //return statement
}
