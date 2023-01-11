/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:8
Description: Program to input elements in row major and print in coloumn major(2D array).
*/

#include<stdio.h>
int main()
{
int n;
printf("Number of elements in one row=");
scanf("%d",&n);   //asking user to input number of elements in one row and storing it
int a[n][n];
printf("Enter elements");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);   //accepting the elements in row major order (i=row,j=coloum)
}
printf("Coloumn major order : ");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
printf("%d ",a[j][i]);   //printing in coloumn major order (i=row,j=coloum)
}
return 0;
}
