/*Section 14
Name - Rajdeep Lahiri
Roll - 22CH30025
Assignment no - 8
Description - */

#include <stdio.h>
int main()
{
printf("Enter the lengths of the two strings\n");
int len1,len2,count=0,count1=0,i,j,k;
scanf("%d",&len1);
scanf("%d",&len2);
char s1[len1];
char s2[len2];
char newstr[len2];
printf("Enter the two strings\n");
scanf("%s",s1);
scanf("%s",s2);
for(i=0;i<len1-len2+1;i++)
{
	count1=0;
	if(s1[i]==s2[0])
	{
		for(j=0;j<len2;j++)
		{
			newstr[j]=s1[i+j];
		}
	
		for(k=0;k<len2;k++)
		{
		if(newstr[k]==s2[k])
		count1++;
		}	
		if(count1==len2)
		count++;
	}	
}
printf("the number of occurences is %d", count);
return 0;
}    
