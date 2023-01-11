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
	char c[100];
	int p,q,flag=1;
	scanf("%s",c);
	for(int i=0;i<sl(c);i++)
	{
		int j;
		for(j=i+1;j<sl(c);j++)
		{
			if(c[i]==c[j])
			{
				int fl=1;
				for(int u=i+1;u<j;u++) if(c[u]!=c[j-(u-i)]) fl=0;
				if(fl){for(int y=i;y<=j;y++) {printf("%c",c[y]);flag=0;} printf(",");}
			}
		}
	}
	if(flag)
	{
		printf("No palindrom substrings are present");
	}
}
