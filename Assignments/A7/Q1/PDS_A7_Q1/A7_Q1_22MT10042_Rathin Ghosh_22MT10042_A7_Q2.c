#include<stdio.h>
int main()
{
int n,i,j;
printf("Enter the number of elements in the array(in asc. sorted order) : ");
scanf("%d",&n);
int ar[n],a[n+1], num;
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
printf("Enter the new value to be inserted : ");
scanf("%d",&num);
if (num<ar[0])
{ 
a[0]=num;
for(i=1;i<n+1;i++)
a[i]=ar[i-1];
}
else if (num>ar[n-1])
{ 
a[n]=num;
for(i=0;i<n;i++)
a[i]=ar[i];
}
else
{
for(i=0;i<n-1;i++){
if (num>ar[i] && num<ar[i+1])
{
for(j=0;j<i+1;j++){
a[j]=ar[j];
a[i+1]=num;
for(j=i+2;j<n+1;j++)
a[j]=ar[j-1];
}
}
}
}
for(i=0;i<n+1;i++)
printf("%d ",a[i]);
return 0;
}





