/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 8
Description: Program to find no of words,charcters and sentences in a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];// Declaration of the string
	printf("please enter the message");
	scanf("%[^\n]",a);// Input taken for the string
	int length=0;
	int x=0;
	while(a[x]!='\0')
	{
		length++;
		x++;
	}// Loop to find length 
	printf("Length according to library is %d\n",length);// Output printed
	int b;
	b= strlen(a);
	printf("length according to strlen is %d\n",b);// Length according to strlen printed
	int i=0;
	int word=0;
	while(a[i]!='\0')
	{
		if (a[i]== ' ') word++;
		i++;
	}//Loop to count no of words
	int j=0;
	int sentence;
	while(a[j]!='\0')
	{
		if (a[j]== '.') sentence++;
		j++;
	}// Loop to count no of sentences
	printf("The no. of words in the message is %d\n", word);// output printed
	printf("The no. of sentences in the message is %d\n", sentence);// Output printed
	int k=0;
	int vowel =0;
	while(a[k]!='\0')
	{
		if (a[k] == 'a'|| a[k]=='e'|| a[k]=='i'|| a[k]=='o'||a[k]=='u'|| a[k]=='A'||a[k]== 'E'||a[k]=='I'||a[k]=='O'||a[k]=='U')
		{
			vowel++;
		}
	}//loop to count the no of vowels
	printf("The total no of vowels is %d",vowel);// Output printed

	return 0;
}