/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:8
Description: Program to count different parameters of sentence.
*/

#include<stdio.h>
#include<string.h>
void count(char c[])
{
int i=0;
while(c[i]!='\0')
i++;
printf("Length counted without using library: %d",i);
printf("\nLength counted by strlen(): %ld",strlen(c));
}

void words(char c[])
{
int f=0;
for(int i=0;c[i]!='\0';i++)
{
if(c[i]==32);
f++;
}
printf("\nNumber of words: %d",f+1);
}

void sentences(char c[])
{
int f=0;
for(int i=0;c[i]!='\0';i++)
{
if(c[i]=='.');
f++;
}
printf("\nNumber of sentences: %d",f);
}

void vowels(char c[])
{
int f=0;
for(int i=0;c[i]!='\0';i++)
{
if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u');
f++;
}
printf("\nNumber of vowels: %d",f);
}

void frequency(char c[],int size)
{
int f=0;
char ch;
for(int i=0;i<size;i++)
{
for(int j=i;j<size;j++)
{
if(c[i]==c[j])
{
ch=c[i];
f++;
}
}
if(ch!=' '&&ch!=','&&ch!='.')
printf("'%c' = %d  ",ch,f);
f=0;
}
}

int main()
{
char sent[100],letter;
int len=0,i=0;
printf("Enter the sentence\n");
do
{
letter=getchar();
sent[i]=letter;
i++;
len++;
}
while(letter!='\n');
count(sent);
words(sent);
sentences(sent);
vowels(sent);
frequency(sent,len);
return 0;
}
