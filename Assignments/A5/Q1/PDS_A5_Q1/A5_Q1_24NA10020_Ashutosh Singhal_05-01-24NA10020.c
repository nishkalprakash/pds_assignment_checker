//program to separate negative and positive integers
//created by ashutosh singhal
// roll no:24NA10020
#include <stdio.h>
int main()
{
int n,count,i,temp,perm;
int a[100];
printf("enter number of elements");
scanf("%d",&n);
for( i=0;i<n;i++){
printf("enter number");
scanf("%d",&a[i]);
}
count=0;
for(i=0;i<n;i++){
if (a[i]<0){
count=count+1;
temp=a[i];

a[i]=a[count-1];
a[count-1]=temp;
}
if (a[i]>=0){
perm=a[i];
a[i]=a[count];
a[count]=perm;
}
}
for(i=0;i<n;i++){
printf("%d ",a[i]);
}


return 0;
}



