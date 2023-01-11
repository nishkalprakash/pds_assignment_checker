/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:8
Question no:3
description:frequency*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   	char str[1000];
   	printf("Enter sentence:");
   	scanf("%[^\n]",str);//accept sentence 
   	int length=0;
   	int sentence=0;
   	int word=0;
   	int vowel=0;
   	while(str[length]!='\0')//counts number of characters input by user
   		length++;
   	printf("Length without strlen:%d\n",length);//length calculated without strlen
   	printf("Length with strlen():%ld\n",strlen(str));//print length calculated by strlen
   	int p=0;
   	while(p<length)
   	{
   		if(str[p]=='a'||str[p]=='e'||str[p]=='i'||str[p]=='o'||str[p]=='u'||str[p]=='A'||str[p]=='E'||str[p]=='I'||str[p]=='O'||str[p]=='U')
   			vowel++;
   		if(str[p]=='.')
   			sentence++;
   		if((str[p]==' '&&str[p-1]>='a'&&str[p-1]<='z')||(str[p]==' '&& str[p-1]>='A'&&str[p-1]<='Z')||(str[p]=='.'&&str[p-1]>='a'&&str[p-1]<='z')||(str[p-1]>='A'&&str[p-1]<='Z'&&str[p]=='.'))
   			word++;
   		p++;//index change
   	}
   	printf("Number of vowels:%d\n",vowel);//;PRINT VOWEL
   	printf("Number of sentences:%d\n",sentence);//PRINT SENTENCE
   	printf("Number of words:%d\n",(word));//PRINT WORD 

	return 0;
}
