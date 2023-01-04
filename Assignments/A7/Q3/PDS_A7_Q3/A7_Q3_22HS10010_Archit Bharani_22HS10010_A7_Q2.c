#include<stdio.h>
#include<string.h>
int main()
{
char s1[100],s2[100],count=0;
printf("Enter 1st string\n");
scanf("%s",s1);
printf("Enter 2nd string\n");
scanf("%s",s2);
for(int i=0;s1[i]!='\0';i++)
{
for(int j=0;s2[j]!='\0';j++)
{
if(s1[i]==s2[j])
{
count++;
}
}
}
if((strlen(s1)==strlen(s2)) && (count==strlen(s1)))
printf("Anagram");
else printf("Not Anagram");
return 0;
}
