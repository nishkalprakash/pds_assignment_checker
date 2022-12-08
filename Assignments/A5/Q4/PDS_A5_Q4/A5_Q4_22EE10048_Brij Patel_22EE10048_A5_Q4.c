/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 5

Description-Dustbins
*/
#include <stdio.h>
int main()
{
int n,bin,count=0,max=0,min=0;
printf("Enter Array size\n");
scanf("%d",&n);
printf("Enter number of bins\n");
scanf("%d",&bin);
int a[n];
printf("Enter Array Elements\n");
for(int i=0;i<n;++i)
{
scanf("%d",&a[i]);
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
float s=(float)(max-min+1)/bin;
for(int i=1;i<=bin;i++)
{
printf("bin %d:",i);
for(int j=0;j<n;j++)
{
if((a[j]>=(min+(i-1)*s))&&(a[j]<=(min+(i)*s)))
{
printf("%d ",a[j]);
count++;
}
}
printf(" Elems= %d\n ",count);
count=0;
}
return 0;
}
