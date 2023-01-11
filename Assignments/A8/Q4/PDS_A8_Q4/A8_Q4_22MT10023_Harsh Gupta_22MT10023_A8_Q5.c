/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 8
 Description : Program that operates on a string and finds out required things  
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100],s2[100];
	int l1,l2,i,count=0;
	printf("Enter first word: ");
	scanf("%s",s1);

	printf("Enter second word: ");
	scanf("%s",s2);

	while(ch!='\0')
	{
		ch=s1[l1++];
	}
	l1--;
	for(i=0;i<l1;i++)
	{
		if((s2[0]==s1[i])&&(s2[1]==s1[i+1])&&(s2[3]==s1[i+2]))
		count++;
	}
	printf("%d\n",count);
	return 0;
}
