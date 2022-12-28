#include<stdio.h>
int main()
{
int m,n;
printf("Enter the number of elements in the fist array : ");
scanf("%d",&m);
int ar1[m];
printf("Enter the elements in the first array : ");
for(i=0;i<m;i++)
scanf("%d",&ar1[i]);
printf("Enter the number of elements in the second array : ");
scanf("%d",&n);
int ar2[n];
printf("Enter the elements in the first array : ");
for(i=0;i<n;i++)
scanf("%d",&ar2[i]);
int *p,*q;
p=&ar1[m];
q=&ar2[n];
for(i=0;i<(m+n);i++)
printf("%d", Merge
return 0;
}
int* Merge(size1,size2,*ptr1,*ptr2)
{


