#include<stdio.h>
int main()
{
int t,n,l=0;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int a[n];
printf("start entering the numbers:\n");
for(int i=0;i<=n-1;i++)
{
 printf("Enter the element no.%d",i+1);
 scanf("%d",&a[i]);
}
for(int i=0;i<=n-1;i++)
{
 if(i==0)
  {
   for(int j=0;j<n;j++)
    {
     if(a[i]>a[j])
     l++;
    }
   if(l==n)
   t++;
   l=0;
  }
 else if(i==n-1)
 {
 for(int j=0;j<n;j++)
 {
  if(a[i]<a[j])
  l++;
 }
 if(l==n)
 t++;
 l=0;
 }
else
{
 for(int j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 l++;
 }


 for(int j=0;j<=i-1;j++)
 {
  if(a[i]<a[j])
  l++;
 }
 if(l==n-1)
 t++;
}
}

 printf("Out of Order:%d",t);
 return 0;
}
