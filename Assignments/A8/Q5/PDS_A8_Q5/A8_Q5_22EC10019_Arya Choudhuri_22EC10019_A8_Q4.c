/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 8
	Description : Program to print all sub palindromes
*/

#include <stdio.h>

int checkPalindrome (char arr[])
{
	int len ;
	
	for (int i = 0 ; arr[i] != '\0' ; i++)
		len = i;
	len+=1;

	int flag = 1;
	
	for (int j = 0 ; j < (len/2) ; j++ )
	{
		if (arr[j] != arr[len-j-1])
			flag--;
	}
	if (flag==1)
		return 1;
	else
		return 0;
}
int main()
{
	char arr[100];
	
	printf("Enter word: ");
	scanf("%s", arr);

	int len ;
	
	for (int i = 0 ; arr[i] != '\0' ; i++)
		len = i;
	len+=1;
	
	int flag = 0;

	for (int i = 0 ; i < len-1 ; i++)
	{
		for (int j = i+1 ; j < len ; j++)
		{
			char s_arr[j-i+2];
			for (int t = 0 ; t < (j-i+1) ; t++)
				s_arr[t] = arr[i+t];
			
			s_arr[j-i+1]='\0';

			if (checkPalindrome(s_arr)==1)
			{
				for (int t = 0 ; t < (j-i+1) ; t++)
					printf("%c",s_arr[t]);
				printf("   ");
				flag++;	
			}
		
		}
		
	}
	
	if (flag==0)
		printf("No palindrome substrings present.");
	return 0;

}
