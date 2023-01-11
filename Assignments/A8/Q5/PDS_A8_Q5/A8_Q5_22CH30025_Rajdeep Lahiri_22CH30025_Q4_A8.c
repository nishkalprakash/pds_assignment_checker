#include <stdio.h>
int length(char s[])
{
int length = 0;
int i;
for(i=0;i<100;i++)
{
if(s[i]!='\0')
length++;
}
return length;
}

int palindrome(char s[])
{
int i = 0;
int j = length(s)-1;
while(i<j)
{
if(



int main()
{
printf("enter the length\n");
int len;
scanf("%d",&len);
printf("enter the string");
char str[len];
char newstr[len];
scanf("%s",str);
for(i=0;i<len-1;i++)
{
for(j = 0;j<=i+1;j++)
{
newstr[j] = str[j];
}
if(palindrome(newstr[j])==1)
{
for(k = 0;k<=i+1;k++)
printf("%c",newstr[k]);
}
}
return  0;
}

