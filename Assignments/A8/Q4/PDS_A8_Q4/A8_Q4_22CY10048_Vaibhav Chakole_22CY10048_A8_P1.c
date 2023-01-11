/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 8
Description : to print number of times s1 appears in s2
*/
#include<stdio.h>
int main()
{
char s1[50],s2[50];
int length=0,count=0,temp=0,m=0;
printf("Enter string 1 \n");
scanf("%s",s1);
printf("Enter string 2 \n");
scanf("%s",s2);
for(int i=0;s1[i]!='\0';i++)
{
length++;
}
for(int j=0;s2[j]!='\0';j++)
{
for(int k=j;k<j+length;k++)
{
if(s2[k]==s1[m])
temp++; //to compare lenght with temp 
else
break; //to terminate loop
m++;
}
m=0;
if(temp==length) //checking condition to find string in another string
{
count++;
temp=0;
}
}
printf("%d",count);
return 0; //return statement
}
