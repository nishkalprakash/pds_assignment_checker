#include <stdio.h>
int* buildset(int* A,int n)
{
for(i=0;i<n;i++)
{
scanf("%d",*A+i);
}
return *A;
}
int searchset(int* A,int x)
{
int flag =0;
for(i=0;i<n;i++)
{
if (*A+i==x)
flag = 1;
}
return flag;
}
int* union(int* A,int a,int* B,int b)
{
int arr[a+b];
for(i=0;i<a;i++)
{
arr[i] = *A+i;
}
for(i=a+1;i<a+b;i++)
{
arr[i] = *A+i;
}
return *arr;
}
int* intersection(int* A,int a,int* B,int b)
{
int i,j;
int arr[a+b];
int k=0;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(*A+i==*B+j)
{
arr[k] = *A+i;
k++;
break;
}
}
}
return *arr;
}
int* difference(int* A,int a,int* B,int b)
{
int i,j,flag =1;
int arr[a+b];
int k= 0;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(*A+i==*B+j)
{
flag = 1;
break;
}
}
if(flag!=1)
arr[k++] = *A+i
}
return *arr;
}
