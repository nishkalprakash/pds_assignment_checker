/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 8
description:
*/

#include<stdio.h>
#include<string.h>
 char line[100];
 int strlen(char str[])  //declaring function which checks the length
{
 int i;
 for(i=0;str[i]!='\0';i++)
 return i;
}
 
int words(char line[])   //declaring  function which checks number of words
{
 int word_s=0;
 for(int i=0;i<strlen(line);i++)
 if(line[i]==' ')
  word_s++;
 return word_s;
}
 
int sentences(char line[])   //declaring  function which checks number of sentences
{
 int sen_tence=0;
 for(int i=0;i<strlen(line);i++)
 {
   if(line[i]=='.')
  {
    sen_tence++;
  }
   return sen_tence;
}

int main()
{
  char line[100],ch;
  int length,vowels,i,word;
  int count=0;
  printf("enter a line:");
  scanf("%c",&line);
  length=strlen(line);
  printf("length counted without string library is %d\n",length);

  len_gth=strlen(line);
  printf("length counted by strlen() : %d \n",len_gth);

  word=words(line);
  printf("number of words: %d",word);

  sentence=sentences(line);
  printf("number of sentences: %d",sentence);
 
 // counting number of vowels
 for(i=0;line[i]!='\0';i++){
  if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'){
    vowels++;
  }
}
  printf("number of vowels :%d",vowels);
  
   //counting frequency of each alphabet
  printf("enter a character");
  scanf("%c",&ch);
 for(i=0;line[i]!=0;i++)
{
 if (ch==line[i])
   count++;
}
 printf("frequency count of %c alphabet is %d",ch,count);
                                                                                                                                                                                                                                                                                                                                      

 return 0;
}
