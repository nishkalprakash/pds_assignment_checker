
/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:8
Discription :Number of times string s1 appear in string 2


*/
#include<stdio.h>
int main()
{
	int count=0; 
	
	char str1[25];
	char str2[25];
	printf("Enter first string :");
	scanf("%s",str1);
	printf("Enter second string :");
	scanf("%s",str2);
	for(int i=0;str2[i]!='\0';i++)
	{
		int flag;
		for(int j=0;str1[j]!='\0';j++)
		{
			if(str2[i+j]==str1[j])
				flag=1;
			else
				{
				flag=0;
				break;
				}
		}
		if(flag==1)
			count++;
	}
	printf("%d",count);
	return 0;
}
