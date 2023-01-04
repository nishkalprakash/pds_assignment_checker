/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 7
Description : to find maximum numbers by given inputs
*/
#include<stdio.h>
int main()
{
int m,n,t=0,count=0;
printf("Enter array size\n");
scanf("%d",&n);
int a[n],sd[n],fd[n];
printf("Enter array elements\n");
for(int i=0;i<n;i++)
{
sd[i]=a[i]/10;
fd[i]=a[i]%10;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(fd[j]<fd[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}

}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(sd[j]<sd[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}

}
for(int i=0;i<n;i++)
{
printf("")
}
 
return 0;
}