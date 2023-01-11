#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check_vowel(char S)
{
 int c=0;
  if( S =='a'|| S=='A' || S== 'e'||S=='E'||S=='i'||S=='I'||S=='o'||S=='O'||S=='u'||S=='U')

 return 1;

 else 
 return 0;
}


int check_sentences(char S)
{
 int c=0;
  if( S =='.')
 
return 1;

 else 
 return 0;
}
int main()
{
  int p,r=1,d=0,T=0;
printf("Enter the string:-");
  char S[100];
  gets(S);

for(int i=0;S[i]!='\0';i++)
{
  p=i+1;
}

int q= strlen(S);
printf("Length counted  by strlen() : %d\n",q);

for(int i=0;S[i]!='\0';i++)
{
  if(check_vowel(S[i])==1)
{
  
  d++;
}
}
for(int i=0;S[i]!='\0';i++)
{
  if(check_sentences(S[i])==1)
{
  
  T++;
}
}

for(int i=1;S[i]!='\0';i++)
{
  if(S[i]==' ')
{
  r++;
}
}

printf("Length counted without using librabry : %d\n",p);
printf("Number of Vowels %d\n",d);
printf("Number of sentences %d\n",T);
printf("Number of words %d\n",r);



return 0;
}


  
