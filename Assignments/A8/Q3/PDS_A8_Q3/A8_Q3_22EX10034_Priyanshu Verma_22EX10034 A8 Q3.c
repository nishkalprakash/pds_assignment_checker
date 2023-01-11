/*
* SEC: 14
* Roll no: 22EX10034
* Name: Priyanshu Verma 
* Assignment No 8
* Description : C program that would:
a)Count the length of the message. 
b)Count the number of words.
c)Count the number of sentences.
d)Count the number of vowels.
e)Store the frequency counts of each alphabet (not case-sensitive, both ‘A’ and small ‘a’ will be treated as the same) in the message..
*/
#include <stdio.h>
#include <string.h>
int occurences(char s[] , char e[])
int flag=0, i=0;
i++;


void length(char s[]){
   int count = 0;
    while (s[count]!='\0') count++;
printf("length without using library:%d\t",count)
}
return;
}


void word_count(char s[]){ 
int i=0; count=0;
while (s[i++]='\0') if s[i]==' ') count++;
printf("Number of Words %d\n", ++count);
}
return;
}

void sentence_count(char s[]){ 
int i=0; count=0;
while (s[i++]='\0') if (s[i]=='.'|| s[i]=='?' || s[i]=='!') count++;
printf("Number of Sentences %d\n",count);
}
return;
}

void vowel_count(char s[]){ 
int i=0; count=0;
while (s[i++]='\0')if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'|| (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') count++;
printf("Number of vowels %d\n",count);
}
return;
}


void aplhabet_count(char s[]){ 
   char 
aplhabet[26]='a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z';
int i , j ,count=0;
while(i<26){
count=occurences(s , alphabet[i]);
if (count) printf("'%c' = %d" 
return;
}


int main()
char[100]
int i=0
scanf("%^\n",s);
printf("%s\n",s)
l=strlen()
length
printf(" ")
printf(" ")
word_count(s)
printf(" ")







































