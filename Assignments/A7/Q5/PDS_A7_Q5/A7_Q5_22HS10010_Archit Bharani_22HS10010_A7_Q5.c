#include<stdio.h>
int main()
{
int a[10],n,z=0;
printf("Enter the number of integers you want to give output ");
scanf("%d",&n);
printf("Enter the numbers\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(int l=0;l<n;l++){
int count=0,count1=0;
  for(int j=l+1;j<n;j++){
if(a[l]<=a[j])
count++;
}
for(int k=l-1;k>=0;k--)
{
if(a[l]>=a[k])
count1++;
}
if(count1+count!=n-1)
z++;
}
printf("Out of order = %d",z);

return 0;
}
