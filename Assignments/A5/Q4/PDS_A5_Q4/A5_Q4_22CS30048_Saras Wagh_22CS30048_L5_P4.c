/*  *Section 14
Roll no.:22CS30048
Name:Saras Wagh
Assignment no.:5
Description:
Create an array and divide into bins.*/


#include<stdio.h>
int main()
{
int N,bins,c=1;

int i,b,k;

printf("Enter the value of N(Size of the array):\n");
scanf("%d",&N);
int a[N];
printf("Start entering the elements in range of [1,100]:\n");
for(int i=0;i<=N-1;i++)
{
printf("Enter the no.: ");
scanf("%d",&a[i]);
if(a[i]<0||a[i]>100)
{
printf("Please reenter the element in range of [1,100]");
continue;
}
}
printf("Enter the no. of bins:\n");
scanf("%d",&bins);
printf("The Array a[%d] is:\n",N);
for(int j=0;j<=N-1;j++)
{
printf("%d,",a[j]);
}
printf("\n");
b=100/(bins);

for(k=1;k<=bins;k++)
{
printf("Bin%d-> ",k);
b=b*k;
for(i=0;i<=N-1;i++)
{
if(c<=a[i] && a[i]<=b)
{
printf("%d ",a[i]);
printf("Elems:%d",i);
}
}
printf("\n");

c=c+b;


}
return 0;
}

