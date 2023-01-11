	/* Name: Varun Huchchannavar
	   Section: 14
	   Roll number: 22MF10045 */	
	int func (char a[])
	{
	int i=0;
	while(a[i]!='\0')
	i++;
	return i;
	}
	#include<stdio.h>
	int main()
	{
	char S1[100];
	char S2[100];
	printf("Enter String 1");
	scanf("%s",S1);
	printf("Enter String 2");
	scanf("%s",S2);
	int i,j,v;
	j=0;
	v=0;
	for(i=0;i<func(S2);i++)
	{
	if(S2[i]==S1[j])
	{
	j++;
	}
	else
	j=0;
	if(j==func(S1))
	{
	v++;
	j=0;
	}
	}
	printf("%d \n",v);
	return 0;
	}
