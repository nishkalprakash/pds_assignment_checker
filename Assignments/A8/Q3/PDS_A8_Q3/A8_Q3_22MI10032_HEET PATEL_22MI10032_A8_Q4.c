/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 8
Description :  to do appropriate functions as per the message.
*/ 
#include<stdio.h>
#include<string.h>
int count(char s[]){
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
count++;
}
return count;
}
int words(char s[]){
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
if(s[i]==' '){

count++;
}

}
return count+1;
}
int sentence(char s[]){
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
if(s[i]=='.'){

count++;
}

}
return count;
}
int vowels(char s[]){
int count = 0;
for(int i = 0 ; s[i]!='\0';i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){

count++;
}

}
return count;
}
void frequency(char s[]){
int i = 0;
int x;
int c[26]={0};
int count =0;
while(s[i]!='\0'){
if(s[i]>='a'&&s[i]<='z'){
 x = s[i]-'a';
c[x]++;
}

i++;


}
for(int i = 0 ; i <26;i++){
if(c[i]!=0)
printf("'%c'= %d ,", i+'a',c[i]);
}
}


//At the stroke of the midnight hour,when the world sleeps.India will awake to life and freedom.
int main(){
printf("Enter message:\n");
char s[150];
int t[256]={0};
scanf("%[^\n]",s);

printf("%s",s);
printf("\n");
printf("Length counted without using library: %d\n",count(s));
printf("Length counted by strlen(): %ld\n",strlen(s));
printf("Number of words: %d\n",words(s));
printf("Number of sentences: %d\n",sentence(s));
printf("Number of vowels: %d\n",vowels(s));
printf("frequency count of each alphabet:");
frequency(s);

}
