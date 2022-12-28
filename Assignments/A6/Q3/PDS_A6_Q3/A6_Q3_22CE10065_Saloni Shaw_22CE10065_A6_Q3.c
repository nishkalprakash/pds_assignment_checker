/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 6
Description - Program to merge two sorted arrays
*/
#include <stdio.h>

#include <stdlib.h>

int*Merge(int size1; int size2,int*ptr1, int*ptr2)//function for merging 
{
int*ptr3;
int i;
for(i=0;i<(size1+size2);i++)
{
if(*ptr1<*ptr2)//checking
{
*(ptr3+i)=*ptr1;
ptr1++;//increases the value by one 
}
else if(*ptr2<*ptr1)
{
*(ptr3+i)=*ptr2;
ptr2++;
}
else if(*ptr1=*ptr2)
{
*(ptr3+i)=*ptr1;
ptr1++;
}
}
return ptr3;//return statement
}
int main()//main function
{
int n1, n2,i;
int *a;//pointers
int *b;
int*ptr3;
printf("enter size\n");//entering size
scanf("%d",&n1);
a=(int*)malloc(n1*sizeof(int));
printf("enter values\n");//entering values 
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("enter size\n");
scanf("%d",&n2);
b=(int*)malloc(n2*sizeof(int));
ptr3=(int*)malloc((n1+n2)*sizeof(int));
printf("enter values\n");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
Merge(n1,n2,a,b,ptr3);
printf("A= ");//for A
for(i=0;i<n1;i++)
printf("%d ",*(a+i));
printf("B= ");//for B
for(i=0;i<n2;i++)
printf("%d ",*(b+i));
printf("C= ");//for C
for(i=0;i<(n1+n2);i++)
printf("%d ",*(c+i));
return 0;
}
//end of the program
