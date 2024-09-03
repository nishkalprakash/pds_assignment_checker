#include <stdio.h>
#define N 100
int main()
{
int n,i,j,k=0,s,t,m,a=0,b,c;
printf("enter the number of elements in array:");
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
printf("Duplicates: ");
for (a=0;a<n;a++)

{
for (b=a+1;b<n;b++)
{
if (A[a]==A[b])
{
k++;
printf("%d",A[a]);}
}}}
return 0;
}


