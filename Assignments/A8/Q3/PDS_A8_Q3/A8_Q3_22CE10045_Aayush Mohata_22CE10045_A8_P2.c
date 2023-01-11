/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:8
Discription :To find strlen,words,vowels,sentence and each alphabet frequency 

*/
#include<stdio.h>
int sentences(char arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='.')
			count++;
		
	}
	return count;
}	
int stlen(char arr[])
{
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int vowel(char arr[],int n)
{
	char b[5]={'a','e','i','o','u'};
	char c[5]={'A','E','I','O','U'};
	int count=0; 
	for(int i=0;i<5;i++)
	{
		
		for(int j=0;j<n;j++)
			{
			if(b[i]==arr[j])
				count++;
			else if(c[i]==arr[j])
				count++;	
			}
	}
	return count;
}
int word(char arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if((arr[i]==' ')||(arr[i]==',')||(arr[i]=='.'))
			count++;
		
	}
	return count;
}

int main()
{
	char str[100];
	char small[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	char capital[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int alph[26];
	scanf("%[^\n]",str);
	printf("The length of string is:%d\n",stlen(str));
	printf("Number of words in strings is %d\n",word(str,stlen(str)));
	printf("Number of sentences in string is %d\n",sentences(str,stlen(str)));
	printf("Number of vowels in string is %d\n",vowel(str,stlen(str)));
	for(int k=0;k<26;k++)
	{
		int count=0;
		for(int p=0;p<stlen(str);p++)
		{
			if((str[p]==small[k])||(str[p]==capital[k]))
				count++;
		}
		alph[k]=count;
	}

	for(int u=0;u<26;u++)
	{	
		if(alph[u]!=0)
			printf("%c=%d ",small[u],alph[u]);
	}

	return 0;

}
