#include <stdio.h>

int main()
{
	int n,i,k,j,c,count=0,flag;
	printf("Enter the length of the word : ");
	scanf("%d",&n);
	char word[n];
	scanf("%s",word);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			int len = j-i+1;
			char substring[len],rev_str[len];
			c=0;
			flag=0;
			for(k=i;k<=j;k++)
			{
				substring[c++]='\0';
				rev_str[c]='\0';
			}
			c=0;
			for(k=i;k<=j;k++)
			{
				substring[c++]=word[k];
				rev_str[len-c]=word[k];
			}
			for(k=i;k<=j;k++)
			{
				if(substring[k]!=rev_str[k])
					flag=1;
			}
			if(flag==0&&len>1)
			{
				if(count==0)
			 		printf("%s",substring);
			 	else
					printf(", %s",substring);
			 	count++;
			}
			c=0;
			for(k=i;k<=j;k++)
			{
				substring[c++]='\0';
				rev_str[c]='\0';
			}
		}
	}
	if(count==0)
		printf("No palindrome substrings present\n");
	return 0;
}
