#include<stdio.h>
int main()
{
int n,num,count=0,arr[100];
printf("enter the size of required array");
scanf("%d", &n);
for(int i=0; i<n;i++)
{
scanf("%d", &arr[i]);
}
printf("enter the elements to find result");
scanf("%d", &num);
for(int j=0;j<n;j++)
{
if(num==arr[j])
count =count +1;
}
printf("%d appears %d times",num,count);
return 0;
}


