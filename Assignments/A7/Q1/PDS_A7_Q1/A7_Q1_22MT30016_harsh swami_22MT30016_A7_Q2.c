#include<stdio.h>
int main()
{
int i,n,m;
printf("enter no of elements");
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("enter m");
scanf("%d",&m);
}
i=n-1;
while(m<a[i] && i>=0)
{
arr[i+1]=arr[i];
i--;}
arr[i+1]=m;
for (int j=0;j<n;j++)
{
printf("%d",arr[j]);
}
return 0;
}
