// Name : Bhoomik Modi
// Roll : 23PH10013
#include <stdio.h>
#include<string.h>
#include <math.h>
#include<stdlib.h>
int encode1(char str[20]);
int encode2(char str[20]);
int check(char str[20]);
int main()
{
	char str[20];
	scanf("%[^\n]s",str);// For storing the user entered string
	check(str);
	encode1(str);
	encode2(str);
	puts(str);//printing th eoriginal string
}
int check(char str[20])
{
	int count =0;
	int len = strlen(str);
	for(int i=0;i<len-2;i++)
	{
		if (str[i] +1==str[i+2])
			++count;
	}
	printf("Number of such pattern is : %d \n", count);
	
}
int encode1(char str [20])
{
	int len =strlen(str);
	char str2[20];// creating a local copy variable
	for(int i=0;i<len;i++)
	{
		if(str[i]<'y')
			str2[i]=str[i]+2;
		else if (str[i]=='y')
			str2[i]='a';
		else if (str[i]=='z')
			str2[i] ='b';
	}
	for(int i=0;i<len;i++)
	{
		printf("%c",str2[i]);
	}
	printf("\n");
}
int encode2(char str[20])
{
	int len=strlen(str);
	char str1[40];
	for (int i=0,j=0;j<len;j++,i+=2)
	{
	str1[i]='a';
	str1[i+1]=str[j];
	}
	for (int i=0;i<len*2;i++)
	{
	printf("%c",str1[i]);

	}
	printf("\n");
}
