/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :8
 Question No :5
 Description: perform the operations on a massage
 */

#include <stdio.h>
#include <string.h>

int length(char s[])
{
	int n=0;
	while(s[n]!='\0')
		n++;
	return n;
}

int words(char a[])//to calculate the number of words 
{
   int s=0;
   for(int i=0;i<length(a);i++)
   {
   	if(a[i]==' ')
       s++;
   }
   return s+1;//number of space + 1
}

int sent(char a[])//to calculate the number of sentences 
{

   int s=0;
   for(int i=0;i<length(a);i++)
   {
   	if(a[i]=='.')
       s++;
   }
   return s;

}

int vowels(char a[])//to calculate the number of vowels
{
	int s=0;
   for(int i=0;i<length(a);i++)
   {
   	if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
       s++;
   }
   return s;
}

int freq(char a[],char b)
{
	int s=0;
   for(int i=0;i<length(a);i++)
   {
   	if(a[i]==b || a[i]==((char)(b-32)))
       s++;
   }
   return s;

}

int main()
{
	char string[100];
	printf("ENTER A MESSAGE: ");
	scanf("%[^\n]",string);
	int l1=length(string);
	int l2=strlen(string);
	printf("Length calculated without library function: %d \n Length calculated with strlen(): %d \n",l1,l2);
    int s=words(string);
    printf("Number of words: %d ",s);
    int f=sent(string);
    printf("Number of sentences: %d ",f);
    int v=vowels(string);
    printf("Number of vowels: %d ",v);
    printf("frequency count of each alphabet");
    for(char i='a';i<='z';(char)(++i))
    {
    	int f=freq(string,i);
    	if(f>0)
    	printf("'%c'=%d, ",i,f);
    }
}
   