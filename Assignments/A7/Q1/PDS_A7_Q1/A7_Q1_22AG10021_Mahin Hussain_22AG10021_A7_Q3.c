/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:7
Description: Program to input new element in a sorted array .
*/

#include<stdio.h>
int main()
{
 int n,x,f=0;
 printf("Enter the elements in the array\nn:");
 scanf("%d",&n);             //asking user to input number of elements and storing it
 int a[n],b[n+1];       //a[n] is original array and b[n+1] is final array
 printf("Enter the elements in ascending order\n");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);           //asking user to input number in ascending order and storing it
 printf("Enter the number to be inserted\n");
 scanf("%d",&x);              //asking user to input number to be inserted and storing it
 for(int i=0;i<n;i++)
  if(a[i]<x)                //searching the position where new number can be inserted
   f++;
 b[f]=x;            //storing the number to be inserted in the new array
 for(int i=0;i<f;i++)
  b[i]=a[i];          //storing the numbers less than number to be inserted in new array
 for(int i=f;i<=n;i++)
  b[i+1]=a[i];     //storing the numbers more than number to be inserted in new array
 printf("Input Array: ");
 for(int i=0;i<n;i++) 
  printf("%d ",a[i]);        //printing the input array
 printf("\n");              //changing line
 printf("Output Array: ");
 for(int i=0;i<=n;i++)
  printf("%d ",b[i]);                 //printing output array
 return 0;
}
