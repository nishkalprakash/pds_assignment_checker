/* Name: Abhijit Kumar
Roll No. 22IM10001
Section 14
Lab No.7
Question 3
Topic- To check two user input strings if they are Anagram */

#include<stdio.h>
int main()
{
char string1[100],string2[100];
printf("\n Enter first word: ");
gets(string1);
printf("\n Enter second word: ");
gets(string2);
int p,q,flag[100],i;
for (p=0;string1[p]!='\0';p++)
{
for(q=0;string2[q]!='\0';q++)
{
if(string1[p]==string2[q])
flag[i]=1;
}
i++;
}
for(p=0;p<=i;p++)
{
if(flag[p]!=1)
{printf("\n Not Anagram");
break;}
else
{printf("\n Anagram");
break;}
}
return 0;
}
