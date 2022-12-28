#include<stdio.h>
int*Merge(size1,size2,*ptr1,*ptr2){
int n,m,a[n],a[j],i,j,max1=a[n-1],max2=a[m-1];
for(i=n-1;i>=0;i--)
{
if (a[i]>a[n-1])
{
max1=a[i];
printf("%d %d",a[n-1],max1);
}
if(a[j]>a[m-1]){
max2=a[j];
printf("%d %d",a[m-1],max2);
}
}
int main ()
{
int p,q[],r,s[];
printf("Enter the size of array 1");
scanf("%d",&p);
printf("Enter the values");
scanf("%d",&q[p]);

printf("Enter the size of array 2");
scanf("%d",&r);
printf("Enter the values");
scanf("%d",&s[r]);

int*Merge(p,r,q[p],s[r]);
 

return 0;
}
