/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:6
Description: Program to merge 2 sorted arrays.
*/

#include<stdio.h>
int Merge(int size1,int size2,int *ptr1,int *ptr2)
{
int arr[size1+size2],x=0;
while(x<(size1+size2))
{
if(*ptr1>*ptr2)
{
arr[x]=*ptr1;
x++;
*ptr1=*(ptr1+1);
}
else if(*ptr1<*ptr2)
{
arr[x]=*ptr2;
x++;
*ptr2=*(ptr2+1);
}
}
return arr;
}
int main()
{
int size_1,size_2;
printf("Enter the size: ");
scanf("%d \n",&size_1);
int a[size_1],*p1=&a[0];
printf("Enter values");
for(int i=0;i<size_1;i++)
scanf("%d",&a[i]);
printf("Enter the size: ");
scanf("%d \n",&size_2);
int b[size_2],*p2=&b[0];
printf("Enter values");
for(int i=0;i<size_2;i++)
scanf("%d",&b[i]);
printf("A = ");
for(int j=0;j<size_1;j++)
printf("%d\t",a[j]);
printf("\nB = ");
for(int j=0;j<size_2;j++)
printf("%d\t",b[j]);
printf("\nC = ");
for(int j=0;j<size_1+size_2;j++)
printf("%d\t",Merge(size_1,size_2,p1,p2));
return 0;
}
