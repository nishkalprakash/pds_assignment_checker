/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:7
Discription : To check given strings are anagram or not

*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	int m,n,flag,flag1;
	printf("Enter strings");
	scanf("%s",str1);
	scanf("%s",str2);
	m=strlen(str1);
	n=strlen(str2);
	if(m==n)
	{
		for(int i=0;i<m;i++)
		{
		flag=0;
		for(int j=0;j<m;j++)
		{
			if(str1[i]==str2[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			flag1=0;
			break;
		}
	}
		if(flag1==0)
			printf("strings are not anagram");
		else
			printf("strings are anagram");
	}
	return 0;
}
		
