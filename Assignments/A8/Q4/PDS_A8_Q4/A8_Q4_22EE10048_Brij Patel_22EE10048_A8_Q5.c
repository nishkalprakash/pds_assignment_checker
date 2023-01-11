/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 8

Description-comparing string with substring
*/
#define size 100
#include <stdio.h>//including package
int main()//main method
{
char s1[size],s2[size];
printf("Enter String 1\n");//Getting strings from user
scanf("%s",s1);		   
printf("Enter String 2\n");
scanf("%s",s2);		   
int len=0,count=0,k=0,t=0;
for(int i=0;s1[i]!='\0';i++)
len++;//checking length of first string
for(int i=0;s2[i]!='\0';i++)
{
for(int j=i;j<i+len;j++)//loop for 3 characters from second string
{
if(s2[j]==s1[k])
t++;
else
break;
k++;
}
k=0;
if(t==len)//checking if string matches the substring
count++;
t=0;
}
printf("%d\n",count);
return 0;//return statement
}

