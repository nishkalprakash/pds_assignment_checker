#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[101];
	char c;
	int *al;
	al=(int*)(calloc(26,sizeof(int));

	int sen=0,vow,wrds=0;
	printf("enter the sentence");
	int i=0;
	for(i=0;c!='\0',i++)
	{
		c=getchar();
		s[i]=c;
		if((s[i]>='A')&&(s[i]<='Z')) al[s[i]-'A']++;
		if((s[i]>='a')&&(s[i]<='z')) al[s[i]-'a']++;
		if(s[i]=='.')sen++;
		if((s[i]==' ')||(s[i]=='\n')) wrds++;
	}
	s[i-1]='\0';
	vow=(al[0]+al[4]+al[8]+al[14]+al[20]);
	printf("length counted without using library is %d\n",i-1);
	printf("length counted by strlen() is %ld",strlen(s));
	printf("no of words is %d",wrds);
	printf("no of sentence is %d",sen);
	printf("no of vowels is %d",vow);
	printf("frequency count of each element");
	for(int i=0;i<26;i++)
	{
		if(al[i])
		{
			printf("%c=%d,",('a'+j),al[j]);
	}
}
return 0;
}
