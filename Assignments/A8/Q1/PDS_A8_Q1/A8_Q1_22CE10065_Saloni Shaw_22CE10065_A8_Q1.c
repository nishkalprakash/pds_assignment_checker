/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 8

Description - Program to print column major order

*/

#include <stdio.h>

int main ()
{
int a[5][5];
int i,j,n;
printf("enter the elements in one row or column");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++);
scanf("%d", &a[i][j]);
}
printf("column major order");
for(j=0;j<n;j++)
{
for(i=0;i<n;i++)
printf("%d ",a[i][j]);
}
return 0;
}









