/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:6
Description: Program to print the given series.
*/

#include<stdio.h>
int print_term(int x)   //function which returns the given series using recursion
{
 if(x==0)
  return 0;
 else if(x==1)
  return 1;
 else if(x==2)
  return 2;                //returning the given values of series
 else
  return (3*print_term(x-1)*print_term(x-2))-(2*print_term(x-2)*print_term(x-3))+1; //computing nth term of series using recursion
}

int main()
{
 int k;
 printf("Enter the no. of terms to be displayed\n");
 printf("k=");
 scanf("%d",&k);      //asking user to enter the number of terms to be displayed and reading it
 if(k==-1)           //for invalid input
  printf("Invalid Input\n");
 else
 {
  for(int i=0;i<k-1;i++)      //loop to print the numbers followed by ','
  printf("%d,",print_term(i));
 }
 printf("%d\n",print_term(k-1));     //printing the last term 
 return 0;
}
