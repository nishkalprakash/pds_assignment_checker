/*
Section 14
Surabhi Prakash Dhavale
22ME10026
assignment8
LAB9
Question 2
*/
#include<stdio.h>
int main()
{
int i,j,m;
printf("Enter size of array\n");
scanf("%d",&m);
int a[m][m],transpose[m][m];
printf("enter the elements:");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
transpose[j][i]=a[i][j];
}

printf("Elements in column major order\n");

 for(i=0;i<m;i++)
{
for(j=0;j<m;j++){
printf("%d",transpose[i][j]);
}}
return 0;
}
