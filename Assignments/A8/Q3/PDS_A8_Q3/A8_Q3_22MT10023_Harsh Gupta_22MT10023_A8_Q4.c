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
	int word=1,sent=0,vowel=0,c=1,i,count;
	char sentence[100],ch,a,b;
	printf("Enter the sentence : ");
	scanf("%[^\n]",sentence);
	ch=sentence[0];
	while(ch!='\0')
	{
		ch=sentence[c++];
		if(ch==' ')
			word++;
		else if(ch == '.')
			sent++;
		else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			vowel++;
		}

	}
	printf("Length counted without using library: %d\n",c-1);
	printf("Length counted by strlen() : %ld\n",strlen(sentence));
	printf("Number of words: %d\n",word);
	printf("Number of sentences: %d\n",sent);
	printf("Number of vowels: %d\n",vowel);
	printf("%s\n",sentence);
	for(a='A';a<='Z';a++)
	{
		count=0;
		for(i=0;i<c-1;i++)
		{
			if(sentence[i]==a||sentence[i]==a+32)
			{
				count++;
			}
		}
		if(count>0)
			printf("'%c' = %d,",a+32,count);
	}
	return 0;
}
