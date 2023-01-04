/* Name: Abhijit Kumar
Roll No. 22IM10001
Section 14
Lab No.7
Question 2
Topic- To print the largest number using all the digits entered */

#include<stdio.h>
int main()
{
int p;
printf("\n Enter the number of terms");
scanf("%d",&p);
int a[p];
int i,j,temp;
printf("\n Enter the terms ");
for(i=0;i<p;i++)
scanf("%d",&a[i]);
for(i=0;i<p-1;i++)
 {
  for(j=i+1;j<p;j++)
   {
    if(a[j]>a[i])
     {
      temp=a[j];
      a[j]=a[i];
      a[i]=temp;
     }
   }
 }
printf("\n The largest number that can be formed is ");
for(i=0;i<p;i++)
{
printf("%d",a[i]);
}
}
