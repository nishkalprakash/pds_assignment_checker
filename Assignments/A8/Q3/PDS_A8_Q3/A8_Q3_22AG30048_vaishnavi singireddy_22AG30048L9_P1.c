
#include<stdio.h>
#include<string.h>
int main()
{
int i,c1=0,c2=0,c3=0,c4=0,temp1,temp2,freq[26];
char st[100];
printf("enter message");
gets(st);
printf("message is:");
puts(st);
for(i=0;st[i]!='\0';i++)
{
if(st[i]!=' ')
c1++;
}
printf("lenth of the message is:%d\n",c1);
for(i=0;st[i]!='\0';i++)
{
if(st[i]==' ')
c2++;
}
printf("number of words:%d\n",c2+1);
for(i=0;st[i]!='\0';i++)
{
if(st[i]=='.')
c3++;
}
printf("number of sentences:%d\n",c3);
for(i=0;st[i]!='\0';i++)
{
if(st[i]=='a'||st[i]=='A'||st[i]=='e'||st[i]=='E'||st[i]=='i'||st[i]=='I'||st[i]=='o'||st[i]=='O'||st[i]=='u'||st[i]=='U')
c4++;
}
printf("number of vowels:%d\n",c4);
printf("frequency count of each alphabet:");

for(i=0;st[i]!='\0';i++)
{
if(st[i]-'a'>=0 && st[i]-'a'<=26 || st[i]-'A'>=0 && st[i]-'A'<=26)
{
temp1=st[i]-'a';
temp2=st[i]-'A';
}

if(temp1>=0 && temp1<=25)
{
freq[temp1]++;
}
else
{
freq[temp2]++;
}
}


return 0;
}


