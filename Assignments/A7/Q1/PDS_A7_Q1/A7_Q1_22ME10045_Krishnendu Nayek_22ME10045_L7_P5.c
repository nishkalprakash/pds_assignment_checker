#include<stdio.h>
int main()
{
int n;
printf("\n Enter the number of terms to be given:");
scanf("%d",&n);
int a[n+1];
printf("\n Enter the elements of the array in sorted order:");
int i,j,temp;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int k;
printf("\n Enter the new element to be inserted:");
scanf("%d",&k);
for(i=0,j=0;i<n;i++,j++)
{
if(a[i]<k && a[i+1]>=k)
{ 
for(j=n;j>i+1;j--)
 {
 a[j]=a[j-1];
}
a[i+1]=k;
}
}
if(a[0]>k)
{ 
for(j=n;j>0;j--)
 {
 a[j]=a[j-1];
}
a[0]=k;
}



printf("\n The new sorted array includes ");
for(i=0;i<n+1;i++)
{
printf("%d ",a[i]);
}
}

