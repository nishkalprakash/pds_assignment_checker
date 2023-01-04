/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 7
	Description : Program to check whether string is anagram
*/

#include <stdio.h>
#include <string.h>

void sort (char arr[]);

int main()
{
	char s1[100];		
	char s2[100];

	printf("Enter first string: ");
	scanf("%s" , s1);

	printf("Enter second string: ");
	scanf("%s" , s2);
	
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	
	sort(s1);		// implement a bubble sort on string
	sort(s2);
	
	if (len1!=len2)
	{
		printf("NOT Anagram");
		return 0;
	}

	int flag = 0;	//if strings are anagrams, then after sorting they have same sequence of letters.

	for (int i = 0 ; i < len1 ; i++)
	{
		if (s1[i] != s2[i])
			flag++;
	}
	
	if (flag == 0)
		printf("Anagram");
	else
		printf("NOT Anagram");
	
	return 0;
}

void sort (char arr[])		// bubble sort
{
	int i = 0 ;
	int j = 0 ; 
	int len = strlen(arr);

	for (i = 0 ; i < len - 1 ; i++)
	{
		for (j = 0 ; j < len ; j++)
		{
			if (arr[i] < arr[j])
			{
				char temp = arr[i] ; 
				arr[i] = arr[j] ; 
				arr[j] = temp ;
			}
		}
	}
}


