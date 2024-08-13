//program to find the of first n numbers
#include<stdio.h>
int main (){
int n;
 printf("enter an integer between 99 and 1000!");
 scanf("%d",&n);
 int s1;
 s1 = (n*(n+1))/2;
 printf("the sum of first n number is: %d", s1);
 //program to calculate sum of square of first n numbers 
 int s2;
 int t=((2*n)+1)/2;
 s2 = (t*(n+1)*n)/2;
 printf("the sum of square of first n number is: %d", s2);
 }
