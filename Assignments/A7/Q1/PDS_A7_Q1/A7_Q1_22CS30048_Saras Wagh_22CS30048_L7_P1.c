#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int n,ele,m,t,d;
 printf("Enter the size of the array:\n");
 scanf("%d",&n);
int a[n+1];
printf("Start entering the numbers in sorted order:\n");
for(int i=0;i<=n-1;i++)
{
printf("Enter the element no.%d:",i+1);
scanf("%d",&a[i]);
}
printf("Enter the element that you wants to insert:\n");
scanf("%d",&ele);
for(int j=0;j<=n-2;j++)
{
if(ele>=a[n-1])
{
a[n]=ele;
}
else if(ele<=a[0])
{
d=a[0];
a[0]=ele;
for(int k=n;k>=2;k--)
{
a[k]=a[k-1];
}
a[1]=d;
}
else if(a[j]<ele&&ele<=a[j+1])
{
m=a[j+1];
a[j+1]=ele;
t=j+1;
for(int k=n;k>=t+2;k--)
{
a[k]=a[k-1];
}
a[t+1]=m;
}
}
for(int i=0;i<=n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
