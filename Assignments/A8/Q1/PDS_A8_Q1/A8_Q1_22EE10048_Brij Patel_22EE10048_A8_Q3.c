/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 8

Description-row major order to column major order
*/

#include <stdio.h>//including package
int main()//main method
{
int i,j,m;
printf("Enter size of each row\n");
scanf("%d",&m);
int a[m][m];
printf("Enter Elements in row major order\n");
for(i=0;i<m;i++)//loop for row elements
{
for(j=0;j<m;j++)//loop for column elements
scanf("%d",&a[i][j]);
}
printf("Elements in column major order\n");
for(i=0;i<m;i++)//loop for column elements
{
for(j=0;j<m;j++)//loop for row elements
printf("%d ",a[j][i]);
}
return 0;//return statement
}

