/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 11
description:checking if a number belongs to fibonacci series or not
*/

#include<stdio.h>

int fib_seq(int n)//declaring the fibonacci function
{
 int sum;
 if(n==0)
   return 0;
 if(n==1)
   return 1;
 sum=fib_seq(n-1)+fib_seq(n-2);
 else
   return sum;  //returning the sum
}

 int main()
{
 int arr[30]; //storing the elements in an array
 for(int i=0;i<30;i++)
  arr[i]=fib_seq[i];

 int n;
 
 printf("enter the value of n:");
 scanf("%d",&n);
 int flag=0;
 for(int i=0;i<30;i++)
{
   if(arr[i]==n)
    flag++;
}
 //checking whether the number belongs to fibonacci series or not
 if(flag!=0)
  {
    printf("yes\n");
  }
 else
  {
    printf("no\n");
  }

 return 0;
}
