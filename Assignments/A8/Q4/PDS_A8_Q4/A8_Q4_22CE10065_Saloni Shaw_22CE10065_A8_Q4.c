/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 8

Description - Program to print the number of times the first string S1 appears in second string S2

*/

#include <stdio.h>

int main ()
{
char S1[5];
char S2[50];
int i,j, c=0,flag=0,l1=0,l2=0;//declaring and initializing variables
printf("enter string S1\n");
scanf("%s",&S1);//entering the first string
printf("enter string S2\n");
scanf("%s",&S2);//entering the second string
for(i=0;S1[i]!='\0';i++)
l1++;//length of 1st string
for(i=0;S2[i]!='\0';i++)
l2++;//length of 2nd string
for(i=0;i<(l2-2);i++)
{
flag=0;
for(j=0;j<l1;j++)
{
if(S2[i+j]!=S1[j])//checking 
flag=1;
}
if(flag==0)
c++;//increasing by 1
}
printf("%d ",c);//printing the number of times it appears
return 0;
}
