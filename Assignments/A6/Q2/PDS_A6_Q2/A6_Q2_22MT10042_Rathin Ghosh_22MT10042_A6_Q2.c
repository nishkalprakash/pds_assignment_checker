/*
Name : Rathin Ghosh
Sec: 14
Roll no. : 22MT10042
Program desc. : The program prints the coprime elements from an array using recursion technique.
*/
#include<stdio.h>
int gcd(int a, int b)
{
int t;
if (a>b)
{
t=a;
a=b;
b=t;
}
if (b%a==0)
return a;
else
return gcd(a,b%a);
}
void CoPrime(int a, int b)
{
if (gcd(a,b)==1)
printf("(%d,%d) ",a,b);
}
void Pair(int ar[],int l)
{
int i,j;
for(i=0;i<l-1;i++)
{
for(j=i+1;j<l;j++)
{
CoPrime(ar[i],ar[j]);
}
}
}
int main()
{
int n,i;
printf("Enter the number of terms : ");
scanf("%d",&n);
printf("Enter the array elements : \n");
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
Pair(arr,n);
return 0;
}


