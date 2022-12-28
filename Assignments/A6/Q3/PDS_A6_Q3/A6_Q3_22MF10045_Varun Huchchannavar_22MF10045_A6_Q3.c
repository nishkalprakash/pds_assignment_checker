#include<stdio.h>
#include<stdlib.h>
	int merge(int size1, int size2, int *ptr1, int *ptr2)
{
	int ptr3[size1+size2];
	for(int i=0;i<size1;i++)
	{
	ptr3[i]=ptr1[i];
	}
	for(int i= size1; i<size1+size2;i++)
	{
	ptr3[i]=ptr2[i-size1];
	}
	int temp;
	for(int i=0;i,size+size2;i++)
	{
	for(int j=i+1;j,size1+size2;j++)
	{
	if (ptr3[i]<=ptr3[j]) continue;
	else
	{
	temp=ptr3[i];
	ptr3[i]=ptr3[j];
	ptr3[j]=temp;
	}
	}

}
for(int i=0;i<size1+size2;i++)
{
printf("%d",ptr3[i]);
}

}
int main()
{
int n;
printf("Enter Size :");
scanf("%d",&n);
int a[n];
printf("Enter Value");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
int k;
printf("enter size");
scanf("%d",&k);
int b[k];
for(int i=0;i<k;i++)
{
scanf("%d",&b[i]);
}
printf("A=");
for(i=0;i<n;i++)
{
printf(B= ");
for(i=0;i<k


