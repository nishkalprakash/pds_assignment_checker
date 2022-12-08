/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:5
Description: Program to sort the elements of array in different bins.
*/

#include<stdio.h>
int N,no_bins,a[N],r;
int main()
{
printf("Enter the value of N \n");
scanf("%d",&N);
printf("Enter number of bins \n");
scanf("%d",&no_bins);
printf("Enter number in array \n");
int big=a[0],small=a[0];
for(int i=0;i<N;i++)
{
scanf("%d",&a[i]);
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}
r=N/no_bins;
int bins[r],f[no_bins];
for(int j=0;j<no_bins;j++)
{
f[j]=0,m=0;                                                                     
for(int k=0;k<N;k++)
{
if(a[k]>=small&&a[k]<=r)
{
f[0]++;
bins[m]=a[k];
m++;
}
else if(a[k]>r&&a[k]<=2*r)
{
f[1]++;
bins[m]=a[k];
m++;
}
else if(a[k]>2*r&&a[k]<=3*r)
{
f[2]++;
bins[m]=a[k];
m++;
}
else if(a[k]>3*r&&a[k]<=4*r)
{
f[3]++;
bins[m]=a[k];
m++;
}
}
}
int k=0;
for(int l=0;l<no_bins;l++)
{
printf("%d(l+1)>%d \t ",bins[l+1],bins);
for(k=0;k<r;k++)
{
printf("%d",bins[k]);
}
printf("Elems=%d",f[k+1]);
}

return 0;
}

