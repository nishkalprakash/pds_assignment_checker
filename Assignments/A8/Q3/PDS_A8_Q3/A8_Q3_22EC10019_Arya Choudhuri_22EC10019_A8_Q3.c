/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 8
	Description : Program to perform functions on a message
*/

#include <stdio.h>
#include <string.h>

int len( char arr[])
{
	int len = 0;
	for (int i = 0 ; arr[i] != '\0' ; i++)
		len = i;
	return (len+1);
}

int wordcount( char arr[])
{
	int count = 0 ;
	for (int i = 0 ; arr[i] != '\0' ; i++)
	{
		if ((arr[i]==' ')&& ((65<arr[i+1]<90)||(97<arr[i+1]<122)))
			count++;
	}
	return count+1;
}


int sentencecount(char arr[])
{
	int count = 0 ;
	for (int i = 0 ; arr[i] != '\0' ; i++)
	{
		if (arr[i] == '.')
			count++;
	}
	return count;
}


void freqcount( char arr[] , int c_arr[])
{
	for (int i = 0 ; arr[i]!='\0' ; i++)
	{
		for (int j = 0 ; j < 26 ; j++)
		{
			if ( (arr[i]==65+j)||(arr[i]==97+j))
				c_arr[j]++;
		}
	}
}

int vowelcount(char arr[])
{
	int count;
	for (int i = 0 ; arr[i]!='\0' ; i++)
	{
		if ((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u')||(arr[i]=='A')||(arr[i]=='E')||(arr[i]=='I')||(arr[i]=='O')||(arr[i]=='U'))
			count++;
	}
	return count;
}
 
int main()
{
	char arr[100];
	scanf("%[^\n]",arr);

	int len_f = strlen(arr);
	int len_c = len(arr);

	printf("Length counted without using library : %d" , len_c);
	printf("\nLength counted by strlen(): %d" , len_f);

	int w_c = wordcount(arr);
	printf("\nNumber of words : %d" , w_c);

	int s_c = sentencecount(arr);
	printf("\nNumber of sentences: %d", s_c );

	int c_arr[26];
	for (int i = 0 ; i < 26 ; i++)
		c_arr[i] = 0;

	printf("\nNumber of vowels: ");
	
	int v_c = vowelcount(arr);	
	printf("%d" , v_c);

	freqcount ( arr , c_arr);
	
	printf("\nFrequency count of each alphabet:\n");
	
	for (int i = 0 ; i < 26 ; i++)
	{
		printf("'%c' = '%d', ", (97+i) ,c_arr[i]);
	}

	
	return 0;

}
