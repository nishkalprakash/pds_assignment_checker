#include<stdio.h>
int main()
{
int m,n,i,j;
printf("Enter the order of the array (row,column) ");
scanf("%d%d",&m,&n);
int ar[m][n];
printf("Enter the elements of the array : ");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&ar[i][j]);
printf("The formed array is :");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d",ar[i][j]);
}
printf("\n");
}
saddle(ar,m,n);
return 0;
}
void saddle(int a[][],int x,int y)
{
int min_c=0,min_r=0;
for(int i=0;i<x;i++)
{
int min=a[i][0];
for(int j=0;j<y;j++)
{
if (a[i][j]<a[i][0]){
min=a[i][j];
min_r=i;
min_c=j;
}
}
int max=a[0][min_c];
for(int k=0;k<y;k++)
{
if(a[k][min_c]>max)
max=a[k][min_c];
}
if (max==min){
int c=1;
printf("The saddle point is = %d",max);
}
}
}




