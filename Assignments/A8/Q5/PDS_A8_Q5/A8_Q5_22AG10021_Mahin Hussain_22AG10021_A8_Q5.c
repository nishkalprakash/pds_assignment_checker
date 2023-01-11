/*Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:8
Description: Program to print palindrome substrings of a string.
*/

#include<stdio.h>
int length(char c[])
{
int l=0;
while(c[l]!='\0')
l++;
return l;
}

int palindrome(char c[])
{
int f=0;
for(int i=0;i<length(c)/2;i++)
{
if(c[i]==c[length(c)-i])
f++;
}
if(f==length(c)/2)
return 1;
else
return 0;
}
void break(char c[])
{
char x[100];
for(int i=0;i<length(c)-1;i++)
{
}

int main()
{
char word[100];
printf("Enter a word");
scanf("%s",word);
break(word);
return 0;
}

