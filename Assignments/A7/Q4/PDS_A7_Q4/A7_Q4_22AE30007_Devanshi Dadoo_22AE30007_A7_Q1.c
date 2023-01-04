/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 7
desciption: PRINTING NUMBERS IN DESCENDING ORDER
*/


#include<stdio.h>

int main()
{
 int n,temp;
 printf("enter number of digits "); // ASKING USER FOR NUMBER OF ELEMENTS 
 scanf("%d", &n);
int a[n];
 for(int i=0; i<n; i++) // SAVING ELEMENTS ENTERED IN ARRAY 
 {
  scanf("%d", &a[i]);
 }

 for(int i=0; i<n;i++)
 {
 for(int j=0; j<n; j++)
 {
  if(a[j]>a[i]) //SWAPPING 
  {
  temp=a[j];
  a[j]=a[i];
  a[i]=temp;
  }
}
}
for(int i=n-1; i>=0; i--)
{
 printf("%d", a[i]);
}
}
 

