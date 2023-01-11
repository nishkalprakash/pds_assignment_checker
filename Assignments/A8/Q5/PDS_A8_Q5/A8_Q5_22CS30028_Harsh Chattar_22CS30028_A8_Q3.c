/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 8
Description : program to print palindorme substrings in a given string
*/

#include <stdio.h>

int palindrome(char s[],int len)    //a function to check for palindrome strings
{
char temp[len];
int check=0;
for(int i=0;i<len;i++)
{
	temp[i] = s[len-i-1];		//making a temporary character array to store reversed string
}
for(int j=0;j<len;j++)
{
	if(temp[j] == s[j]) check++;     //checking if reversed string is equal to original string
}
if(check == len)
	return 1;			//returning 1 if palindrome is found
else
	return 0;			//returing 0 if not palindrome
}

int main()
{
char s1[100];
printf("Enter string1 : \n");
scanf("%s",s1);
int l1=0,palcount=0;


while(s1[l1]!='\0') l1++;    	//calculating length of the string
if(palindrome(s1,l1) == 1)		//checking if the entire input string is palindrome
{
	for(int i=0;i<l1;i++)
	{
		printf("%c",s1[i]);
	}
	printf(" ");
	palcount++;
}
for(int i=0;i<l1;i++)			//loops to find all possible substrings
{	
	char temp[l1];
	int c=0;
	for(int j=i;j<l1;j++)
	{
		temp[c] = s1[j];
		if(palindrome(temp,c) == 1 && c!=1 && c!=0)	//checking if substrings are palindrome
		{
			palcount++;			//keeping count of no. of palindrome substrings
			for(int k=0;k<c;k++)
			{
				printf("%c",temp[k]);	
			}
			printf(" ");
		}
		c++;
		
	}
	
}
if(palcount==0) //if no palindrome substrings are found
printf("No palindrome substrings present.");

return 0;
}
