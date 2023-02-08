#include<stdio.h>
#include<stdlib.h>
void Create()
{
printf("Enter the number of rows : ");
scanf("%d",&m);
printf("Enter the number of columns : ");
scanf("%d",&n);
int ar=(int **)malloc(sizeof(int)*m*n);
printf("Enter the values in row major order :\n ");
for(i=0;i<n;i++)
for(j=0;j<m;j++)
scanf("%d\n",&ar[i][j]);
for(i=0;i<m;i++)
*ar+m-i= reverse(*ar+i,n)
}
int *reverse(int *p,int y)
{
int i=0;
int ar=(int *)malloc(sizeof(int)*y);
if (y!=0)
return reverse(*p,y-1)
else 
return 
}
int main()
{
Create()
