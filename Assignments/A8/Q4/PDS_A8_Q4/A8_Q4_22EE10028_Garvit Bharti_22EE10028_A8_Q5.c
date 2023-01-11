#include<stdio.h>
int sl(char a[])
{
	int i=0;
	while(a[i]!='\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char s1[100];
	char s2[100];
	printf("S1:");
	scanf("%s",s1);
	printf("S2:");
	scanf("%s",s2);
	int j=0,cn=0;
	for(int i=0;i<sl(s2);i++)
	{
		if(s2[i]==s1[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
		if(j==sl(s1))
		{
			cn++;
			j=0;
		}
	}
	printf("%d\n",cn);
}