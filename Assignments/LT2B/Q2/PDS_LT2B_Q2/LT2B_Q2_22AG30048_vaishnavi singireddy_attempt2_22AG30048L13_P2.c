
//printing a 2d matrix of size mxn
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,x,m,n,A[100][100];
scanf("%d",&x);
printf("ENTER M:");
scanf("%d",&m);
printf("ENTER N:");
scanf("%d",&n);
for (i=0;i < m;i++)
{
for (j=0;j<n;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("enter %d",x);
printf(" elements:");
for (i=0;i<m; i++)
{
for (j=0;j<n;j++)
{
printf("%d",A[i][j]);
}
}
printf("\n");
for (i=0;i<m; i++)
{
for (j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
return 0;
}

