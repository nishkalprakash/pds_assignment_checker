/*Section 14
Name - Rajdeep Lahiri
Roll - 22CH30025
Assignment no - 8
Description - */

#include <stdio.h>
int length(char s[])//returns length
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

int words(char s[])//returns number of words
{
int count = 0,i;
for(i=0;i<length(s);i++)
{
if(s[i]==' '||s[i]==','||s[i]=='.')
count++;
}
return count;
}

int sentences(char s[])//returns number of sentences
{
int count = 0,i;
for(i=0;i<length(s);i++)
{
if(s[i]=='.')
count++;
}
return count;
}
int vowels(char s[])//returns number of vowels
{
int count1 = 0,i,count = 0;
char vow[] = "AEIOUaeiou";
for(i = 0;i<length(s);i++)
{
for(j=0;j<10;j++)
{
if(s[i]==vow[j])
count1++;
}
if(count1>0)
count++;
}
return count;
}
int freqcount(char s[])//freq of each character
{
int checkarr[26];
for(i=0;i<26;i++)
checkarr[i] = 0;
for(i=0;i<length(s);i++)
{
checkarr[(int)s[i]-65]++;
}
for(i='a';i<'z';i++)
printf("%c=%d",i,checkarr[int(i)]);




int main()
{
char msg[100];
printf("Enter the text message\n");
scanf("%[^\n]",msg);

}


