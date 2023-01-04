/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 7
* Description : Program to check if its an anagram
*/
#include<stdio.h>
int find(char arr1[], char arr2[]);
int main()
{
int n;
scanf("%d", &n);

 char arr1[n], arr2[n];
 int flag;
printf("Enter the string:");
gets(arr1);
printf("enter another string:");
gets(arr2);
flag= find(arr1 , arr2);
if(flag==1)
printf("ANAGRAM");
else
printf("NOT ANAGRAM");
return 0;
}
int find( char arr1[], char arr2[])
{
 int num1[n]= {0}, num2[n]= {0};
while(arr1[i] != '\0')
{
num1[arr1[i]-'a']++;
i++;
}
while(arr2[i] != '\0')
{
num2[arr2[i]-'a']++;
i++;
}
for(i=0; i<n; i++)
{
if(num1[i]!=num2[i])
 return 0;
}
return 1;
}
