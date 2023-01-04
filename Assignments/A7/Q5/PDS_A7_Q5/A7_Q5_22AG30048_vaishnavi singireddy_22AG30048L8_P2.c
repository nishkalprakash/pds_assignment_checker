#include<stdio.h>
#include<math.h>
int main()
{
int a[10],n,i,j,k,count;
j=0;
count=0;
printf("enter size of array\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{

if(a[i]<=a[i+1] && a[i+1]<=a[i+2]&& a[i+2]<=a[i+3]  )
printf("out of order is 0");
}
}






