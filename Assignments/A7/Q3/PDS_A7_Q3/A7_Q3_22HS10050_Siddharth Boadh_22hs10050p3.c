#include<stdio.h>
int check_anagram(char [],char[]);
int main()
{
char a[100],b[100];

printf("Enter two strings\n");
scanf("%s",a);
scanf("%s",b);
if(check_anagram(a,b)==1)
{
printf("Anagram");
}
else
printf("NOT Anagram");
return 0;
}
int check_anagram(char a[], char b[])
{
int first[26] = {0},second[26] = {0}, c=0;
while(a[c]!=0)
{
first[a[c]-'a']++;
c++;
}
c = 0;
while(b[c]!=0)
{
second[b[c]-'a']++;
c++;
}
for(c = 0;c<26;c++)
{
if(first[c] != second[c])
return 0;
}
return 1;
}
