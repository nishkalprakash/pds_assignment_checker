/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:7
Description: Program to check for number of repetetions .
*/

#include<stdio.h>
int main()
{
 int m,n,f=0;
 printf("Enter the number of elements(<=100)\nn:");    //asking user to enter number of elements and storing them
 scanf("%d",&n);
 int a[n],b[n],x=0;
 printf("Enter the numbers\n");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("Enter the number repetetions\nm:");
 scanf("%d",&m);                                        //asking user to enter number of repetetion and storing it
 for(int i=0;i<n;i++)
  {
  for(int j=0;j<n;j++)
  {
   if(a[i]==a[j])                     //checking how many times the same same number appears
   f++;
  }
  if(f==m)                   //checking if the number is repeated desired number of times or not
  {
   b[x]=a[i];     //storing the numbers which is repeated desired number of times in an array
   x++;             //x updates the position of array b[]
  }
  f=0;           //making counter 0 for further comparison
  }
 if(x==0)
  printf("No number appears %d times",m);  //if no number is repeated desired number of times
 else
 {
  for(int i=0;i<x;i++)
  {
   if(b[i]==b[i+1])
    continue;                     //for repeated number to  be printed only once
   else
    printf("%d ",b[i]);
  }
  printf("appears %d times",m);            //for printing in given format
  }
 return 0;
 }
