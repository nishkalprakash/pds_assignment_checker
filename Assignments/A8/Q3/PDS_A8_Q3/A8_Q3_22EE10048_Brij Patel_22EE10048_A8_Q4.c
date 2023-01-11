/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 8

Description-printing frequency of alphabets and many more operations
*/

#include <stdio.h>//including packages
#include <string.h>
int main()//main method
{
char s[100];
int len=0,cspace=0,cstop=0,cvowel=0,cf=0;
gets(s);
for(int i=0;s[i]!='\0';i++)
len++;//computing length without using library methods
int l=strlen(s);//computing length using strlen
printf("Length computed without using library methods: %d\n",len);
printf("Length computed using strlen: %d\n",l);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
cspace++;//counting spaces
if(s[i]=='.')
cstop++;//counting fullstops
if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
cvowel++;//counting vowels
}
cspace++;//number of words=number of spaces + 1
printf("Number of words: %d\n",cspace);
printf("Number of sentences: %d\n",cstop);
printf("Number of vowels: %d\n",cvowel);
printf("Frequency count of each alphabet:\n");
for(char c='a';c<='z';c++)
{
for(int i=0;s[i]!='\0';i++)
{
if((s[i]==c)||(s[i]==(c+'A'-'a')))//checking alphabet with string
cf++;//counting frequency of each alphabet
}
if(cf)
printf("'%c'=%d, ",c,cf);
cf=0;
}
return 0;//return statement
}

