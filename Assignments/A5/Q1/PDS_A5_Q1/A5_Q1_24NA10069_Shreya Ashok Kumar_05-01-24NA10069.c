#include <stdio.h>
#define N 100
int main()
{
int n,i,j,k;

printf("enter number of elements in the array:");
scanf("%d",&n);
if (n>N)
{printf("error: n>100");
}
else {
int A[n];
printf("enter the non-zero array elements:");
for (i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("\n rearranged array:");
for (j=0;j<n;j++)
{
if (A[j]<0)
{
printf("%d ",A[j]);
}
}
for (k=0;k<n;k++)
{
if (A[k]>0)
{
printf("%d ",A[k]);
}
}
}
return 0;
}

