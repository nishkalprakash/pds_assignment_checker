#include<stdio.h>
#include<string.h>
int check_vowel(char S)
{
 int c=0;
 if(S=='a'||S=='A'||S=='e'||S=='E'||S=='i'||S=='I'||S=='o'||S=='O'||S=='u'||S=='U')
return 1;
else return 0;
}
int check_sentences(char S)
{
int c=0;
if(S=='.');
return 1;
else
return 0;
}
int main()
{
int p,r=1,d=0,T=0;
printf("Enter the string:");
char S[100];
gets(S);
for(int 
