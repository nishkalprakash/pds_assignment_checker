/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 8
Description : to print the frequency of a substring in a given string
*/

#include <stdio.h>

int main()
{
char s1[100],s2[100];
printf("Enter string1 : \n"); //taking input strings
scanf("%s",s1);

printf("Enter string2 : \n");
scanf("%s",s2);

int l1=0,l2=0;
while(s1[l1]!='\0') l1++; //finding length of string1
while(s2[l2]!='\0') l2++;	//finding length of string2



int check=0,count=0;
for(int i =0; i<l2;i++)		//loops to find substrings 
{
	char temp[l1],check=0;
	for(int j=0;j<l1;j++)
	{
		temp[j]=s2[i+j]; 
	}
	for(int j=0;j<l1;j++)
	{
		
		if(temp[j] == s1[j])  //checking is a substring is equal to string1
		{
			check++;
		}
	}
	
	if(check == l1)		//finding frequency
	{
		count++;
	}
}
printf("%d",count);	//printing result


return 0;
}
