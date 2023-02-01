#include <stdio.h>
#include <stdlib.h>
int main()
{
int rows;
printf("Enter the number of rows");
scanf("%d",&rows);
int array1[rows][rows];
int array2[rows][rows];
int i,j;
printf("Enter
for(i=0;i<rows;i++)
{
for(j=0;j<rows;j++)
{
scanf("%d",&array1[i][j]);
}
}
for(i=0;i<rows;i++)
{
for(j=0;j<rows;j++)
{
scanf("%d",&array2[i][j]);
}
}
return 0;