/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 7
Description : to check anagram
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char str1[100]; //declaring string
char str2[100];
int count=0;
printf("Enter 1st word\n");
scanf("%s",str1);
printf("Enter 2st word\n");
scanf("%s",str2);
int n1=strlen(str1); //function to find lenght of string
int n2=strlen(str2);
for(int i=0;i<n2;i++)
{
	for(int j=0;j<n1;j++)
	{
	  if(str2[i]==str1[j])
	  {
		count++;
	  }
	}
}
if((n1==n2)&&(count==n1)) //cheking condition for lenght and anagram
printf("Anagram");
else
printf("Not Anagram");
return 0;
}
