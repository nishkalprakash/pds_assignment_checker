/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 7
desciption: TO COUNT HOW MANY DIGITS ARE OUT OF ORDER 
*/


#include<stdio.h>

int main()
{

int n, not_in_order=0;
 printf("enter number of digits "); // ASKING USER FOR NUMBER OF ELEMENTS 
 scanf("%d", &n);
int a[n];
 for(int i=0; i<n; i++) // SAVING ELEMENTS ENTERED IN ARRAY 
 {
  scanf("%d", &a[i]);
 }
for(int i=1; i<n-1; i++)
{
 if (a[i]>a[i+1] || a[i]<a[i-1]) //checking if in order 
 {
   not_in_order ++;
 }
}

printf("OUT OF ORDER: %d", not_in_order);
}
