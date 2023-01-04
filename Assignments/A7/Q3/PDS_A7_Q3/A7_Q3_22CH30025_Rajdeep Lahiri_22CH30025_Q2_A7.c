/*Name - Rajdeep Lahiri
Roll no - 22CH30025
Assignment number - 7
Description -*/
#include <stdio.h>

void main()
{
printf("enter the length for the two strings\n");//input for the length
int len1,len2;
scanf("%d",&len1);
scanf("%d",&len2);
if(len1!=len2)
{
	printf("the two strings are not anagram");

}
char str1[len1];
int i,j,count1=0;
char str2[len2];
printf("enter the two strings\n");//input for the strings
scanf("%s",str1);
scanf("%s",str2);
int arr[26];
for(i=0;i<26;i++)
	arr[i] = 0;
for(i=0;i<len1;i++)
{
	arr[(int)str1[i]-65]++;//incremrnting that index which is the position of that letter in alphabet
}
for(j=0;j<len2;j++)
{
	arr[(int)str2[j]-65]--;//decrementing if found common
}
for(i=0;i<26;i++)
{
	if(arr[i]==0)
	count1++;
}
if(count1==26)
	printf("anagram");
else
	printf("not anagaram");

}



