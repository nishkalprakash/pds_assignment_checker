#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int length=0,space=0,sentence=0,vowel=0,freq=0;
gets(s);
for(int i=0;s[i]!=0;i++)
{
length++;
}
printf("Length of message without strlen : %d\n",length);
printf("Length of message with strlen : %ld\n",strlen(s));

for(int i=0;i<length;i++)
{
if(s[i]==' ')
space++;                     //No. of words-1
if(s[i]=='.')
sentence++;                //No. of sentence
 if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
vowel++;                                  //No. of vowels
}
printf("Number of words =%d\n",space+1); 
printf("Number of sentences =%d\n",sentence); 
printf("Number of vowels=%d\n",vowel);
 
for(char str='a';str<='z';str++)
{
for(int k=0;k<length;k++)
if((s[k]==str) || (s[k]==(str+'A'-'a')))
freq++;                                      //Counting word frequency
if(freq)
{
printf("'%c' = %d",str,freq);
freq=0;
}
}
return 0;
}

