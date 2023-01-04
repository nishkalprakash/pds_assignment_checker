#include<stdio.h>
int main()
{
int n;
printf("\n Enter the number of terms:");
scanf("%d",&n);
int a[n];
int i,j,temp;
printf("\n Enter the terms:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
  {
   if(a[j]>a[i])
   { 
    temp=a[j];
    a[j]=a[i];
    a[i]=temp; 
    }
   }
}
printf("\n The largest number that can ne formed is ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
    
 
