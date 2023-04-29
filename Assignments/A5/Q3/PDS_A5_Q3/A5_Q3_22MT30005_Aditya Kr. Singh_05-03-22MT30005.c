#include<stdio.h>
void main()
{
int a[100],n,i,temp,l;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
l=n-1;
for(i=0;i<l;i++,l--)
{
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
printf("Reversed array: ");
for(i=0;i<n;i++)
{
printf("%d, ",a[i]);
}
}
