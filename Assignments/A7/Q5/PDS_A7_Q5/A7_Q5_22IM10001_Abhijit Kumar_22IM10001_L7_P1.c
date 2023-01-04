/* Name: Abhijit Kumar
Roll No. 22IM10001
Section 14
Lab No.7
Question 1
Topic- To------------------------- */

#include <stdio.h>
int main()
{
int n;
printf("\n Enter the number of terms to be given:");
scanf("%d",&n);
int a[n];
printf("\n Enter the elements of the array:");
int i,j,flag=0;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
printf("\n out of order : %d",n-i);
flag=1;
break;
}
}
if(flag==0)
printf("\n out of order : 0");
}



