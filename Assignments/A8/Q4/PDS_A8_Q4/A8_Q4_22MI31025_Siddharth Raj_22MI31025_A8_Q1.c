/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:8
Question no:1
description:substring*/



#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[100];
	char b[100];
	printf("Enter substring:");
	scanf("%s",a);
	printf("Enter string:");
	scanf("%s",b);//scan the strings
	int i=0;
	int flag=0;
	int count=0;
	while(b[i]!='\0')//runs till null vharacter is reached in first string
	{
		if(b[i]==a[0])
		{
			for(int j=1;a[j]!='\0';j++)
			{
				if(b[i+j]!=a[j])//checks element by element of string 1 and string 2
				{
					flag=0;//if it does not match it flag=0 and break
					break;
				}
				else {flag=1;}
			}
			if(flag==1) {count++;}//counts number of substring that matched
		}
		i++;
	}
	printf("Count:%d\n",count);//prints number of strings that matched
	return 0;

}