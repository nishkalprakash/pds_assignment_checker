#include<stdio.h>
int main
{
char s1[100],s2[100];
int x=0,y=0,i,j,c1,c2,flag;

printf("enter string1");
gets(s1);
printf("s1:");
puts(s1);
printf("enter string2");
gets(s2);
printf("s2:");
puts(s2);
for(i=0;s1[i]!='\0';i++)
{
c1++;
}
printf("number of words:%d\n",c1);
for(i=0;s2[i]!='\0';i++)
{

c2++;
}
printf("number of sentences:%d\n",c2);
flag=0;
for(i=0;i<=(c2-c1);i++)
{
for(j=0;j<=c1;j++)
{
if(s1[i+j]!=s2[j]
{
}
return 0;
}


