/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Test 1 (Set-B)
Description - Program to print 2 largest numbers from set of entered numbers
*/

#include <stdio.h>
int main()
{
int n,max1=0,max2=0,i,j;
//declaring variables
printf("enter the range");
scanf("%d",&i);//taking range
int a[i];
printf("enter the set of numbers\n");
for(j=0;j<i;j++)
{
scanf("%d\n",&a[j]);//taking inputs
if(i==1)
{
printf("Largest number:%d\n", a[0]);
printf("Second largest number: Value not yet entered");
break;
}
if(a[j]<0)//checking if number is negative
{
printf("<program terminates>");
break;
}
if(a[j]>max1 && a[j]>max2)
max1=(a[j]);//getting the largest number
if(a[j]>max2 && a[j]<max1)
max2=(a[j]);//getting the second largest number
}
printf("Largest number:%d\n", max1);
printf("Second largest number:%d\n",max2 );
return 0;
}
//end of program


