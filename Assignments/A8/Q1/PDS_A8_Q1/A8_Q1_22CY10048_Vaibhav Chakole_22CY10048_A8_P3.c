/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 8
Description : To print row mojor order to column major order
*/
#include<stdio.h>
int main()
{
int i,j,a;
printf("Enter number of elements in a row");
scanf("%d",&a);
int arr[a][a]; //declaration of 2D array
printf("Enter elements \n");
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
printf("%d ",arr[j][i]); //printing column major order
}
}
return 0;
}

