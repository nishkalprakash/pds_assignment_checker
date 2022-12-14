/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: Lab Test Q3
Description : To print two of largest number when entered sequence of numbers
*/
#include<stdio.h>
int main()
{
int n=0,max=0,smax=0,count=0;
printf("enter values: "); //getting values from user
while(n>=0)
{
scanf("%d",&n);
if(n<0) //terminating program if entered value is negative
{
break;
}
if(n>max)
{
smax=max;
max=n;
}
else if(n>smax) //running condition to compare values
{
smax=n;
}
count++;
if(count==1)
{
printf("Largest: %d\n", max);
printf("Value not entered yet\n");
}
else
{
printf("Largest: %d\n",max);
printf("Second largest: %d\n",smax); //printing largest and second largest values
}
}
return 0;
}
