	#include<stdio.h>
	#include<stdlib.h>
	int func(char a[])
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
	int p,q,j,flag=1;
	scanf("%s",c);
	for(int i=0;i<func(c);i++)
	{
		for(j=i+1;j<func(c);j++)
	{if(c[i]==c[j])
	{
	   int fl=1;
	    for(int u=i+1;u<j;u++) if(c[u]!=c[j-(u-i)]) fl=0;
	    if(fl){ for (int y=i;y<=j;y++) {printf("%c",c[y]);flag=0;} printf(",");}
		}
	}
}
	
	if(flag)
	{
	printf("No palindrome substrings are present");
	return 0;
	}
}
