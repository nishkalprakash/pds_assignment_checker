#include<stdio.h>
int main()
{
char word1[100],word2[100];
printf("\n Enter first word:");
gets(word1);
printf("\n Enter second word:");
gets(word2);
int i,j,flag[100],q=0,t=0;
for(i=0;word1[i]!='\0';i++)
{ 
 for(j=0;word2[j]!='\0';j++)
 {
  if(word1[i]==word2[j])
  flag[q]=1;
 }
q++;
}
for(i=0;i<=q;i++)
{
if(flag[q]!=1)
{
printf("\n The words are not anagrams!");
t=1;
break;
}
}
if(t=1) 
printf("\n The words are anagrams!");
}

