/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 8
	Description : Program to check print number of times S1 appears in S2
*/

#include <stdio.h>

int main()
{
	char s1[100];
	char s2[100];

	printf("S1: ");
	scanf("%s",s1);

	printf("S2: ");
	scanf("%s",s2);

	int count = 0;
	for (int i = 0 ; s2[i]!='\0' ; i++)
	{
		int flag = 9999;
		if (s2[i] == s1[0])
		{
			flag = 1;
			for ( int j = 0 ; s1[j]!='\0' ; j++)
			{
				if (s2[i+j] != s1[j])
					flag--;
			}
		}
		if (flag==1)
			count++;
	}
	printf("%d",count);
	return 0 ;
}
