/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 8

Description-Palindrome substrings
*/
#define size 100
#include <stdio.h>//including package
int check=0;
void checkpalindrome(char s[size],int x,int y)//method to check palindrome of string from index x to index y
{
int k=0,t=1;
while((x+k)<(y-k))
{
if(s[x+k]!=s[y-k])
t=0;
k++;
}
if(t)
{
for(int i=x;i<=y;i++)
printf("%c",s[i]);
printf(",");
check=1;
}
}
int main()//main method
{
char s[size];
printf("Enter word\n");
scanf("%s",s);//getting string from user
for(int i=0;s[i]!='\0';i++)
{
for(int j=(i+1);s[j]!='\0';j++)
{
if(s[i]==s[j])
{
checkpalindrome(s,i,j);//calling function
}
}
}
if(check==0)
printf("No palindrome substrings found");
return 0;//return statement
}

