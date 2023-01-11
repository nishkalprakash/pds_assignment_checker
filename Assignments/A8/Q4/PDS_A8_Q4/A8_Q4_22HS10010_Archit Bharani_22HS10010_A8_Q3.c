#include<stdio.h>
#define size 100
int main()
{
char s1[size],s2[size];
int temp=0,m=0,count=0;
printf("Enter 1st string");
scanf("%s",s1);
printf("Enter 2nd string");
scanf("%s",s2);
int l1=0;
for(int i=0;s1[i]!='\0';i++)     //Length of 1st string
{
l1++;
}
int l2=0;
for(int i=0;s1[i]!='\0';i++)      //Length of second string
{
l2++;
}
for(int j=0;s2[j]!='\0';j++)
{
for(int k=j;k<j+l1;k++)             
{
if(s2[k]==s1[m])
temp++;                       //Compare length with emp
else break;                    //terminate loop
m++;
}
m=0;
if(temp==l1)                     //To find string in another string
{
count++;                           //No. of time string occur
temp=0;
}
}
printf("%d",count);
return 0;
}
