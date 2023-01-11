/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 8
Description: Program to find the no of times  string 1 is repeated within string 2
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];// Arrays declared
	printf("please enter the first string\n");
	scanf("%s\n",a);
	printf("please enter the second string\n");
	scanf("%s\n",b);// strings scanned
	int i=0;
	int flag=0,count=0;
	while(b[i]!='\0')
	{
		if(b[i]==a[0])
		{
			for(int j=1;a[j]!='\0';j++)
			{
				if(b[i+j]!=a[j])
				{
					flag =0;
					break;
				}
				else{flag = 1;}
			}
			if(flag==1){count++;}
		}

		i++;
	}// Loop to find the no of times string 1 is repeated within string 2
	printf("%d\n",count );// Output printed
	return 0;
}